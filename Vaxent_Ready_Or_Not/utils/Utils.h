#pragma once
#include "../sdk/SDK.hpp"

#include "../ext/imgui.h"
#include "../ext/imgui_impl_dx11.h"
#include "../ext/imgui_impl_win32.h"
namespace Utils {

	struct BoneStruct {
		SDK::FName bonename;
		SDK::int32 boneid = -1;
		bool founded = false;

	};

	struct TraceLineStruct {
		SDK::FVector start;
		SDK::FVector end;
		bool ignoreLocalPlayer = true; 
		SDK::ECollisionChannel channel; 
		SDK::FHitResult* out;
	};

	struct BulletTraceStruct {
		SDK::FVector startpos;
		SDK::FVector endpos;
		float ct;
	};

	inline int type = 0;
	inline SDK::UWorld*world = nullptr;
	inline SDK::ULocalPlayer* localplayer = nullptr;
	inline std::vector<SDK::ACyberneticController*> EntityList = {};
	inline SDK::UClass* NPC = nullptr;
	inline SDK::UClass* weapon = nullptr;
	inline SDK::UClass* gamemodee = nullptr;
	inline SDK::FName head;
	inline SDK::FName feet_l;
	inline SDK::FName feet_r;
	inline SDK::AReadyOrNotGameMode* gamemode = nullptr;
	inline SDK::AReadyOrNotGameState* GameState = nullptr;
	inline SDK::UFunction* start = nullptr;

	void Init(bool manual) noexcept;

	void Refresh() noexcept;
	SDK::UWorld* GetWorld() noexcept;
	SDK::ULocalPlayer* GetLocalPlayer() noexcept;
	SDK::AReadyOrNotPlayerController* GetPlayerController() noexcept;
	std::vector<SDK::ACyberneticController*> GetAllEntities() noexcept;
	SDK::UClass* NPCClass() noexcept; 
	SDK::UClass* WeaponClass() noexcept;
	SDK::AReadyOrNotGameMode* GetGameMode() noexcept;
	const SDK::AReadyOrNotGameState* GetGameState() noexcept;
	const SDK::ACyberneticController* GetController(const SDK::ACyberneticCharacter* actor) noexcept;
	const bool WantBox(const SDK::ACyberneticCharacter* actor) noexcept;
	const bool WantSkeleton(const SDK::ACyberneticCharacter* actor) noexcept;

	const bool IsInGame() noexcept;
	const bool ShouldLoop(const SDK::ACyberneticCharacter* actor) noexcept;
	const bool Hook(LPVOID pTarget, LPVOID pDetour, LPVOID* ppOriginal, std::string name)noexcept ;
	const bool Find(std::string string, const char* find) noexcept;

	BoneStruct FindBoneByName(const SDK::USkeletalMeshComponent* mesh, std::string bonename) noexcept;
	ImColor GetColorByTeam(const SDK::ACyberneticCharacter* actor) noexcept;
	SDK::ABaseMagazineWeapon* GetActiveWeapon() noexcept;
	bool TraceLine(TraceLineStruct);
	bool CanTarget(SDK::FVector pos, SDK::FVector end, const SDK::ACyberneticCharacter* target) noexcept;
	bool IsTargetingLocalPlayer(const SDK::ACyberneticCharacter* actor) noexcept;
	void DumpAllBones(const SDK::USkeletalMeshComponent* mesh) noexcept;
	BulletTraceStruct GetWeaponMuzzleTrace(SDK::ABaseWeapon* weapon) noexcept;
	SDK::APlayerCharacter* GetLocalPlayerCharacter() noexcept;
	SDK::FRotator SubStrack_FRotator(SDK::FRotator ang1, SDK::FRotator ang2) noexcept;
	bool IsRotatorValid(SDK::FRotator ang) noexcept;

}