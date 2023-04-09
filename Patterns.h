#pragma once

namespace Patterns
{
    constexpr const char* FNameToString = "48 89 5C 24 ? 57 48 83 EC 30 83 79 04 00 48 8B DA 48 8B F9 75 4E E8 ? ? ? ? 4C 8B C8 8B 07 99 81 E2 ? ? ? ? 03 C2 44 8B C0";
    constexpr const char* GObjects = "48 8B 05 ? ? ? ? 48 8D 1C C8 81 4B ? ? ? ? ? 49 63 76 30";

    constexpr const char* KickPlayer = "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 20 49 8B F0 48 8B DA 48 85 D2 74 ? 48 8B BA ? ? ? ? 48";

    constexpr const char* Free = "48 85 C9 74 1D 4C 8B 05 ? ? ? ? 4D 85 C0 0F 84 ? ? ? ? 49 8B 00 48 8B D1 49 8B C8 48 FF 60 20 C3";
    constexpr const char* Malloc = "4C 8B C9 48 8B 0D ? ? ? ? 48 85 C9 75 08 49 8B C9 E9 ? ? ? ?";
    constexpr const char* Realloc = "4C 8B D1 48 8B 0D ? ? ? ? 48 85 C9 75 08 49 8B CA E9 ? ? ? ? 48 8B 01 45 8B C8 4C 8B C2 49 8B D2 48 FF 60 18";

    constexpr const char* ReceiveFString = "40 55 53 56 57 41 56 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 45 27 0F B6 41 28";
    constexpr const char* ReceiveUniqueIdRepl = "48 89 5C 24 ? 55 56 57 48 8B EC 48 83 EC 40 F6 41 28 40 48 8B FA 48 8B D9 0F 84 ? ? ? ? F6 41 2B 02";

    constexpr const char* TickFlush = "4C 8B DC 55 49 8D AB ? ? ? ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 85 ? ? ? ? 49 89 5B 18 48 8D 05 ? ? ? ? 49 89 7B E8 48 8B F9 4D 89 63 E0 45 33 E4";
    constexpr const char* PauseBeaconRequests = "40 53 48 83 EC 30 48 8B D9 84 D2 74 68 80 3D ? ? ? ? ? 72 2C 48 8B 05 ? ? ? ? 4C 8D 44 24 ? 48 89 44 24 ?";
    constexpr const char* Beacon_NotifyAcceptingConnection = "48 83 EC 48 48 8B 41 10 48 83 78 ? ?";
    constexpr const char* InitHost = "48 8B C4 48 81 EC ? ? ? ? 48 89 58 18 4C 8D 05 ? ? ? ?";
    constexpr const char* Beacon_NotifyControlMessage = "4C 8B DC 49 89 5B 18 49 89 73 20 49 89 4B 08";
    constexpr const char* WelcomePlayer = "48 8B C4 55 48 8D A8 ? ? ? ? 48 81 EC ? ? ? ? 48 89 58 18 48 8B 59 30";
    constexpr const char* World_NotifyControlMessage = "48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 48 89 4C 24 ? 55 41 54 41 55 41 56 41 57 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ? 33 FF";
    constexpr const char* SpawnPlayActor = "44 89 44 24 ? 48 89 54 24 ? 48 89 4C 24 ? 55 53 56 57 41 54 41 55 41 56 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 33 F6 48 8D 05 ? ? ? ? 89 75 67 4D 8B E9 4C 8B 65 77 49 39 04 24 74 2A 41 89 74 24 ? 41 39 74 24 ?";
    constexpr const char* World_NotifyAcceptingConnection = "40 55 48 83 EC 50 48 8B 41 10 48 8B E9 48 83 78 ? ? 74 45 80 3D ? ? ? ? ? 72 34 48 8B 05 ? ? ? ? 4C 8D 44 24 ? 48 89 44 24 ? 48 8D 0D ? ? ? ? 48 8D 05 ? ? ? ? 41 B9 ? ? ? ? BA ? ? ? ? 48 89 44 24 ?";
    constexpr const char* GetNetMode = "48 89 5C 24 ? 57 48 83 EC 20 48 8B 01 48 8B D9 FF 90 ? ? ? ? 4C 8B 83 ? ? ? ? 48 8B F8 33 C0 48 C7 44 24";
    constexpr const char* GiveAbility = "48 89 5C 24 ? 56 57 41 56 48 83 EC 20 83 B9 ? ? ? ? ? 49 8B F0 4C 8B F2 48 8B D9 7E 61";
    constexpr const char* InternalTryActivateAbility = "4C 89 4C 24 ? 4C 89 44 24 ? 89 54 24 10 55 53 56 57 41 54 41 57 48 8D AC 24";
    constexpr const char* MarkAbilitySpecDirty = "48 89 5C 24 ? 57 48 83 EC 20 80 B9 ? ? ? ? ? 48 8B FA 48 8B D9 75 4A C6 81";
    constexpr const char* LocalPlayerSpawnPlayActor = "40 55 53 56 57 41 56 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 45 40 48 8B D9 4D 8B F1 49 8B C9 4D 8B F8 48 8B F2";

    constexpr const char* InitListen = "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 50 48 8B BC 24 ? ? ? ? 49 8B F0";
    constexpr const char* PostRender = "48 89 74 24 ? 57 48 81 EC ? ? ? ? 80 B9 ? ? ? ? ? 48 8B F2";

    constexpr const char* CollectGarbage = "E8 ? ? ? ? EB 26 40 38 3D ? ? ? ?";
    constexpr const char* NetDebug = "40 55 56 41 56 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 85 ? ? ? ? 48 8B 01 48 8B F1 FF 90 ? ? ? ? 4C 8B F0 48 85 C0 0F";

    constexpr const char* GetPlayerViewPoint = "48 89 5C 24 ? 48 89 74 24 ? 55 41 56 41 57 48 8B EC 48 83 EC 50 48 8B F2 48 C7 45 ? ? ? ? ? 48 8B 55 D0 4D 8B F0 48 8B D9 45 33 FF E8 ? ? ? ? 84 C0 74 4A 80 BB ? ? ? ? ? 75 41";
}
