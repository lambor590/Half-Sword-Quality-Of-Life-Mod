#include "KeyHandler.h"

#undef max

KeyHandler* KeyHandler::Instance = nullptr;
std::map<int, std::vector<KeyHandler::KeyHandlerFunc>> KeyHandler::Keys;
std::vector<KeyHandler::KeyBinding> KeyHandler::keyBindings;
std::vector<KeyHandler::KeyCombination> KeyHandler::keyCombinations;

KeyHandler* KeyHandler::GetInstance()
{
    if (!Instance)
        Instance = new KeyHandler();
    return Instance;
}

void KeyHandler::RegisterKey(const KeyBinding& binding)
{
    std::function<void()> action = Actions::GetActionById(binding.actionId);
    Keys[binding.key].push_back(action);
    keyBindings.push_back(binding);
}

void KeyHandler::RegisterKeyCombination(const KeyCombination& combination)
{
    std::function<void()> action = Actions::GetActionById(combination.actionId);
    keyCombinations.push_back(combination);
    keyCombinations.back().action = action;
}

void KeyHandler::HandleKeys()
{
    for (const auto& combination : keyCombinations)
    {
        bool allKeysPressed = true;
        for (int key : combination.keys)
        {
            if (!(GetAsyncKeyState(key) & 0x8000))
            {
                allKeysPressed = false;
                break;
            }
        }
        if (allKeysPressed)
        {
            combination.action();
            return;
        }
    }

    for (const auto& [key, handlers] : Keys)
    {
        if (GetAsyncKeyState(key) & 0x8000)
        {
            for (const auto& handler : handlers)
            {
                handler();
            }
        }
    }
}

void KeyHandler::LoadKeyBindings()
{
    std::filesystem::create_directories("HS-QOL-Mod");
    std::ifstream file("HS-QOL-Mod/keybindings.txt");
    if (!file.is_open())
        return;

    keyBindings.clear();
    Keys.clear();
    keyCombinations.clear();

    std::string line;
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string type;
        iss >> type;

        if (type == "key")
        {
            int key;
            int actionId;
            iss >> key >> actionId;
            KeyBinding binding = { static_cast<Actions::ActionID>(actionId), key };
            RegisterKey(binding);
        }
        else if (type == "combination")
        {
            int actionId;
            iss >> actionId;
            std::vector<int> keys;
            int key;
            while (iss >> key)
            {
                keys.push_back(key);
            }
            KeyCombination combination = { static_cast<Actions::ActionID>(actionId), keys };
            RegisterKeyCombination(combination);
        }
    }

    file.close();
}

void KeyHandler::SaveKeyBindings()
{
    std::ofstream file("HS-QOL-Mod/keybindings.txt");
    if (!file.is_open())
        return;

    for (const auto& binding : keyBindings)
    {
        file << "key " << binding.key << " " << static_cast<int>(binding.actionId) << std::endl;
    }

    for (const auto& combination : keyCombinations)
    {
        file << "combination " << static_cast<int>(combination.actionId);
        for (int key : combination.keys)
        {
            file << " " << key;
        }
        file << std::endl;
    }

    file.close();
}

void KeyHandler::ReassignKey(KeyBinding& binding)
{
    std::cout << "Press the new key for " << Actions::GetActionName(binding.actionId);
    std::function<void()> action = Actions::GetActionById(binding.actionId);

    while (true)
    {
        bool anyKeyPressed = false;
        for (int vkCode = 8; vkCode <= 255; ++vkCode)
        {
            if (GetAsyncKeyState(vkCode) & 0x8000)
            {
                anyKeyPressed = true;
                break;
            }
        }
        if (!anyKeyPressed)
        {
            break;
        }
        Sleep(50);
    }

    bool keyCaptured = false;
    while (!keyCaptured)
    {
        for (int vkCode = 8; vkCode <= 255; ++vkCode)
        {
            if (GetAsyncKeyState(vkCode) & 0x8000)
            {
                if (vkCode == VK_RETURN) continue;

                while (GetAsyncKeyState(vkCode) & 0x8000)
                {
                    Sleep(50);
                }

                auto& handlers = Keys[binding.key];
                handlers.erase(std::remove_if(handlers.begin(), handlers.end(),
                    [&binding, &action](const KeyHandlerFunc& func) {
                        return func.target<void()>() == action.target<void()>();
                    }), handlers.end());

                if (handlers.empty())
                {
                    Keys.erase(binding.key);
                }

                int oldKey = binding.key;
                binding.key = vkCode;
                Keys[binding.key].push_back(action);

                UpdateKeyCombinations(oldKey, vkCode);

                std::cout << "\n" << Actions::GetActionName(binding.actionId) << " successfully reassigned to " << GetKeyName(vkCode) << std::endl;
                SaveKeyBindings();
                keyCaptured = true;
                break;
            }
        }
        Sleep(50);
    }
}

void KeyHandler::ShowKeyReassignmentMenu()
{
    std::cout << "\nKey Reassign Menu:\n";
    for (size_t i = 0; i < keyBindings.size(); ++i)
    {
        std::cout << i + 1 << ". " << Actions::GetActionName(keyBindings[i].actionId) << " \n";
    }
    std::cout << "\nSelect an option to reassign: ";

    int option;
    while (!(std::cin >> option) || option <= 0 || option > keyBindings.size())
    {
        std::cout << "Invalid option. Try again.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Select an option: ";
    }

    ReassignKey(keyBindings[option - 1]);
}

std::vector<std::pair<int, Actions::ActionID>> KeyHandler::GetKeyBindings()
{
    std::vector<std::pair<int, Actions::ActionID>> bindings;
    for (const auto& binding : keyBindings)
    {
        bindings.emplace_back(binding.key, binding.actionId);
    }
    return bindings;
}

std::string KeyHandler::GetKeyName(int vkCode)
{
    static std::unordered_map<int, std::string> specialKeys = {
        {VK_HOME, "Home"}, {VK_END, "End"}, {VK_INSERT, "Insert"}, {VK_DELETE, "Delete"},
        {VK_PRIOR, "Page Up"}, {VK_NEXT, "Page Down"}, {VK_UP, "Up Arrow"}, {VK_DOWN, "Down Arrow"},
        {VK_LEFT, "Left Arrow"}, {VK_RIGHT, "Right Arrow"}, {VK_SPACE, "Space"}, {VK_RETURN, "Enter"},
        {VK_TAB, "Tab"}, {VK_ESCAPE, "Escape"}, {VK_BACK, "Backspace"}, {VK_F1, "F1"}, {VK_F2, "F2"},
        {VK_F3, "F3"}, {VK_F4, "F4"}, {VK_F5, "F5"}, {VK_F6, "F6"}, {VK_F7, "F7"}, {VK_F8, "F8"},
        {VK_F9, "F9"}, {VK_F10, "F10"}, {VK_F11, "F11"}, {VK_F12, "F12"}
    };

    auto it = specialKeys.find(vkCode);
    if (it != specialKeys.end())
    {
        return it->second;
    }

    UINT scanCode = MapVirtualKey(vkCode, MAPVK_VK_TO_VSC);
    char keyName[128];
    if (GetKeyNameTextA(scanCode << 16, keyName, sizeof(keyName)) > 0)
    {
        return std::string(keyName);
    }
    return "Unknown Key";
}

void KeyHandler::UpdateKeyCombinations(int oldKey, int newKey)
{
    for (auto& combination : keyCombinations)
    {
        for (auto& key : combination.keys)
        {
            if (key == oldKey)
            {
                key = newKey;
            }
        }
    }
}

KeyHandler::KeyHandler()
{
    RegisterKey({ Actions::SPAWN_ITEM, VK_F1 });
    RegisterKey({ Actions::SET_PLAYER_SPEED, VK_F3 });
    RegisterKey({ Actions::TOGGLE_MASS, VK_F4 });
    RegisterKey({ Actions::TOGGLE_POST_PROCESS, VK_F5 });
    RegisterKey({ Actions::TOGGLE_INFINITE_STAMINA, 0x49 }); // I
    RegisterKey({ Actions::SAVE_LOADOUT, 0x47 }); // G
    RegisterKey({ Actions::TOGGLE_CUSTOM_GAME_SPEED, 0x5A }); // Z
    RegisterKey({ Actions::UNLOAD_DLL, VK_END });
    RegisterKey({ Actions::REASSIGN_KEY, VK_HOME });

    RegisterKeyCombination({ Actions::SET_CUSTOM_GAME_SPEED, {VK_CONTROL, 0x5A} }); // Ctrl + Z
}