#pragma once

#include "GameInstances.h"
#include "ItemSpawner.h"
#include "SDK.hpp"
#include <iostream>

class Actions {
public:
    static void Initialize(HMODULE& Module);
    static void SpawnItem();
    static void SetPlayerSpeed();
    static void ToggleMass();
    static void TogglePostProcess();
    static void ToggleInfiniteStamina();
    static void SaveLoadout();
    static void ToggleCustomGameSpeed();
    static void SetCustomGameSpeed();
    static void UnloadDLL();
    static void ShowKeyReassignmentMenu();

    static float CustomGameSpeed;
    static bool bInfiniteStaminaEnabled;
    static bool bMassReduced;
    static float OriginalPelvisMass;
    static float OriginalRWeaponMass;
    static float OriginalLWeaponMass;
    static float OriginalSpine05Mass;
    static float OriginalAimSwingSpeed;
    static HMODULE Module;

    enum ActionID {
        SPAWN_ITEM,
        SET_PLAYER_SPEED,
        TOGGLE_MASS,
        TOGGLE_POST_PROCESS,
        TOGGLE_INFINITE_STAMINA,
        SAVE_LOADOUT,
        TOGGLE_CUSTOM_GAME_SPEED,
        SET_CUSTOM_GAME_SPEED,
        UNLOAD_DLL,
        CHANGE_KEYBIND
    };

    struct ActionInfo {
        std::string name;
        std::function<void()> action;
    };

    static std::function<void()> GetActionById(ActionID id);
    static std::string GetActionName(ActionID id);

private:
    static std::unordered_map<ActionID, ActionInfo> actions;
};