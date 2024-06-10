#include "Utils.h"
#include "../config/Config.hpp"
#include "../ext/minhook/minhook.h"
#include "../hack/weaponhack/WeaponHack.h"
#include "../hack/aimbot/aimbot.h"
#include "../hack/misc/misc.h"
#include <Windows.h>
#include "../hookmanager/hookmanager.h"


bool hkInitPostEntity(SDK::UObject* _this)
{
	Utils::Init(true);
	std::cout << "Called" << std::endl;
	return true;
}

void Utils::Init( bool manual ) noexcept
{
		
	world = *(SDK::UWorld**)(((uintptr_t)GetModuleHandle(0)) + SDK::Offsets::GWorld);
	localplayer = world->OwningGameInstance->LocalPlayers[0];
	NPC = world->FindClass("Class ReadyOrNot.CyberneticController");
	weapon = world->FindClass("Class ReadyOrNot.BaseWeapon");
	gamemodee = world->FindClass("Class ReadyOrNot.CyberneticController");
	gamemode = (SDK::AReadyOrNotGameMode*)world->GameState->AuthorityGameMode;


	//void* dd = (void*)(((uintptr_t)GetModuleHandle(0)) + SDK::Offsets::ProcessEvent);
	if (!manual)
	{
	//	Hook(world->FindObject<SDK::UFunction>("Function ReadyOrNot.ReadyOrNotPlayerController.ClientSpawned")->ExecFunction, &hkInitPostEntity, (void**)&ClientSpawned, "ClientSpawned");

	//	Hook(world->FindObject<SDK::UFunction>("Function ReadyOrNot.BaseMagazineWeapon.Server_OnFire")->ExecFunction, &WeaponHack::hk_FireBullet, nullptr, "Function ReadyOrNot.BaseMagazineWeapon.Server_OnFire");
	//	Hook(world->FindObject<SDK::UFunction>("Function Engine.Actor.ReceiveTick")->ExecFunction, &Aimbot::Do, (void**)&Aimbot::OriginalReceiveTick, "Function Engine.Actor.ReceiveTick");
//	Hook(world->FindObject<SDK::UFunction>("Function ReadyOrNot.CyberneticController.OnKnownEnemyTakeDamage")->ExecFunction, &Misc::hkReceiveHit, (void**)&Misc::OriginalReceiveHit,"Function Engine.Actor.ReceiveHit");
		
		//Hook((void*)(SDK::InSDKUtils::GetImageBase() + SDK::Offsets::ProcessEvent), &hkProcessEvent, (void**)&ProcessEvent, "ProcessEvent");
		SDK::UBpGameplayHelperLib::GetFoV(&Config::Misc::fov);
		
		hookmanager.Add("Server_OnFire", &WeaponHack::hk_FireBullet, SDK::ABaseMagazineWeapon::StaticClass() );
		hookmanager.Add("ClientSpawned", &hkInitPostEntity, SDK::AReadyOrNotPlayerController::StaticClass());
		hookmanager.Add("OnTakeDamage", &Misc::OnTakeDamage, SDK::UBaseActivity::StaticClass());
		hookmanager.Add("ReceiveTick", &Aimbot::Do, SDK::AActor ::StaticClass());
		hookmanager.HookProcessEvent();
		



	

	}
	

	if (IsInGame())
	{
		Utils::BoneStruct bone = FindBoneByName(GetPlayerController()->Character->Mesh, "head_end");
		Utils::BoneStruct bone2 = FindBoneByName(GetPlayerController()->Character->Mesh, "foot_LE");
		Utils::BoneStruct bone3 = FindBoneByName(GetPlayerController()->Character->Mesh, "foot_Rl");


		if (bone.founded)
		{
			head = bone.bonename;
		}

		if (bone2.founded)
		{

			feet_l = bone2.bonename;
		}

		if (bone3.founded)
		{

			feet_r = bone3.bonename;
		}

	}

	


}


SDK::FRotator Utils::SubStrack_FRotator(SDK::FRotator ang1, SDK::FRotator ang2) noexcept
{
	return SDK::FRotator(ang1.Pitch - ang2.Pitch, ang1.Yaw - ang2.Yaw, ang1.Roll - ang2.Roll);
}
void Utils::Refresh() noexcept
{
	EntityList.clear();
	if (!world) return;
	if (!world->Levels.IsValid()) return;
	for (int i = 0; i < world->Levels.Num(); i++)
	{
		if (!world->Levels.IsValidIndex(i)) continue;

		SDK::ULevel* level = world->Levels[i];
		if (!level) continue;

		if (!level->Actors.IsValid())
			continue;

		for (int i2 = 0; i2 < level->Actors.Num(); i2++)
		{
			if (!level->Actors.IsValidIndex(i2)) continue;
			SDK::AActor* actor = level->Actors[i2];
			if (!actor)
				continue;

			if (!actor->RootComponent)
				continue;

			if (!actor->IsA(NPC))
				continue;
			EntityList.push_back((SDK::ACyberneticController*)actor);
		}
	}


}
SDK::UWorld* Utils::GetWorld() noexcept
{

	return world;
}
SDK::ULocalPlayer* Utils::GetLocalPlayer() noexcept
{
	return localplayer;
}

SDK::AReadyOrNotPlayerController* Utils::GetPlayerController() noexcept {
	return (SDK::AReadyOrNotPlayerController*)(GetLocalPlayer()->PlayerController);
}

std::vector<SDK::ACyberneticController*> Utils::GetAllEntities() noexcept
{
	return EntityList;
}

SDK::UClass* Utils::NPCClass() noexcept
{
	return NPC;
}
SDK::UClass* Utils::WeaponClass() noexcept
{

	return weapon;
}

void Utils::DumpAllBones(const SDK::USkeletalMeshComponent* mesh) noexcept
{
	printf(" Bone Count : %i ", mesh->GetNumBones());
	for (int i = 0; i < mesh->GetNumBones(); i++)
	{
		SDK::FName bone = mesh->GetBoneName(i);

		printf("BoneName : %s \n", bone.ToString());
	}


}



Utils::BoneStruct Utils::FindBoneByName(const SDK::USkeletalMeshComponent* mesh, std::string bonename) noexcept
{
	for (int i = 0; i < mesh->GetNumBones(); i++)
	{
		SDK::FName bone = mesh->GetBoneName(i);

		if (bone.ToString() == bonename)
			return { bone,i,true };

	}

	return {};
}


ImColor Utils::GetColorByTeam(const SDK::ACyberneticCharacter* actor) noexcept
{
	if (actor->IsCivilian())
	{
		if (Config::Esp::Civilian::StatusBoxColor && actor->bSurrendered)
			return   Config::Esp::Civilian::BoxColor_Surrender;

		return Config::Esp::Civilian::BoxColor;
	}

		

	

	if (actor->IsOnSWATTeam())
		return  Config::Esp::SWAT::BoxColor;

	if (actor->IsSuspect())
	{
	


		if (Config::Esp::Suspect::CanTarget && Utils::IsTargetingLocalPlayer(actor))
			return Config::Esp::Suspect::BoxColor_CanTarget;

		if (!Config::Esp::Suspect::StatusBoxColor)
			return Config::Esp::Suspect::BoxColor;


		if (actor->bIsFakeSurrender)
			return   Config::Esp::Suspect::BoxColor_FakeSurrender;

		if (actor->bSurrendered)
			return  Config::Esp::Suspect::BoxColor_Surrender;

		if (actor->bIsPlayingDead)
			return  Config::Esp::Suspect::BoxColor_PlayDead;


		return  Config::Esp::Suspect::BoxColor;
	}
	
	return {255,255,255};
}

SDK::AReadyOrNotGameMode* Utils::GetGameMode() noexcept
{
	return gamemode;
}

const SDK::AReadyOrNotGameState* Utils::GetGameState() noexcept
{
	return (SDK::AReadyOrNotGameState*)GetWorld()->GameState;
}

const SDK::ACyberneticController* Utils::GetController(const SDK::ACyberneticCharacter* actor) noexcept { return (SDK::ACyberneticController*)actor; }

const bool Utils::IsInGame() noexcept {

	const SDK::ULocalPlayer* localplayer = GetLocalPlayer();
	if (localplayer && localplayer->PlayerController && localplayer->PlayerController->AcknowledgedPawn && localplayer->PlayerController->AcknowledgedPawn->PlayerState)
	{
		const SDK::AReadyOrNotPlayerState* state = (SDK::AReadyOrNotPlayerState*)localplayer->PlayerController->AcknowledgedPawn->PlayerState;

		if (state && state->bIsInGame == true)
			return true;

	}

	return false;
}


const bool Utils::Hook(LPVOID pTarget, LPVOID pDetour, LPVOID* ppOriginal, std::string name)noexcept {

	if (auto hook = MH_CreateHook(pTarget, pDetour, ppOriginal) != MH_OK) {
		std::cout << "Failed to hook " + name << " : " << hook <<std::endl;

	}
	return false;
}


const bool Utils::WantBox(const SDK::ACyberneticCharacter* actor) noexcept
{
	if (actor->IsCivilian() && Config::Esp::Civilian::Enable && Config::Esp::Civilian::Box)
		return true;

	if (actor->IsSuspect() && Config::Esp::Suspect::Enable && Config::Esp::Suspect::Box)
		return true;
	if (actor->IsOnSWATTeam() && Config::Esp::SWAT::Enable && Config::Esp::SWAT::Box)
		return true;

	return false;
}

const bool Utils::WantSkeleton(const SDK::ACyberneticCharacter* actor) noexcept
{

	if (actor->IsCivilian() && Config::Esp::Civilian::Enable && Config::Esp::Civilian::Skeleton)
		return true;

	if (actor->IsSuspect() && Config::Esp::Suspect::Enable && Config::Esp::Suspect::Skeleton)
		return true;
	if (actor->IsOnSWATTeam() && Config::Esp::SWAT::Enable && Config::Esp::SWAT::Skeleton)
		return true;

	return false;
}

const bool Utils::ShouldLoop(const SDK::ACyberneticCharacter* actor) noexcept
{
	if (actor->IsLocalPlayer())
		return false;

	if (actor->IsCivilian())
	{
		if (!Config::Esp::Civilian::Enable)
			return false;
		if (!Config::Esp::Civilian::Box && !Config::Esp::Civilian::Skeleton)
			return false;


	}

	if (actor->IsSuspect() && !Config::Esp::Suspect::Enable)
	{
		if (!Config::Esp::Suspect::Enable)
			return false;
		if (!Config::Esp::Suspect::Box  && !Config::Esp::Suspect::Skeleton)
			return false;


	}

	if (actor->IsOnSWATTeam() && !Config::Esp::SWAT::Enable)
	{
		if (!Config::Esp::SWAT::Enable)
			return false;
		if (!Config::Esp::SWAT::Box && !Config::Esp::SWAT::Skeleton)
			return false;


	}

	return true;
}

const bool Utils::Find(std::string string,const char* find) noexcept
{
	return string.find(find) != std::string::npos;
}


SDK::ABaseMagazineWeapon* Utils::GetActiveWeapon() noexcept
{
	if (!Utils::IsInGame())
		return nullptr;

	const SDK::AReadyOrNotPlayerController* playercontroller = GetPlayerController();
	if (!playercontroller)
		return nullptr;

	if (!playercontroller->Character)
		return nullptr;

	
	SDK::ABaseMagazineWeapon* weapon = playercontroller->Character->GetEquippedWeapon();
	if (!weapon)
		return nullptr;

	
	return weapon;
}


bool Utils::TraceLine(Utils::TraceLineStruct trace)
{
	SDK::TArray<SDK::AActor*> emptyactor = {};
	return SDK::UKismetSystemLibrary::LineTraceSingle(GetWorld(), trace.start, trace.end, SDK::ETraceTypeQuery::TraceTypeQuery1,true, emptyactor, SDK::EDrawDebugTrace::None, trace.out, trace.ignoreLocalPlayer, {255,255,255}, {255,255,255}, 0);
}
bool Utils::CanTarget(SDK::FVector  pos, SDK::FVector end, const SDK::ACyberneticCharacter* target) noexcept
{



	return 	true;
}

bool Utils::IsTargetingLocalPlayer(const SDK::ACyberneticCharacter* actor) noexcept
{
	if (!actor->Controller)
		return false;
	if (!actor->Controller->TargetingComponent)
		return false;
	if (!actor->Controller->TargetingComponent->GetTrackedTarget())
		return false;

	return actor->Controller->TargetingComponent->GetTrackedTarget()->IsLocalPlayer();
}


Utils::BulletTraceStruct Utils::GetWeaponMuzzleTrace(SDK::ABaseWeapon* weapon) noexcept
{
	SDK::FVector vec = weapon->MuzzleAttachment->GetSocketLocation(weapon->MuzzleAttachment->GetBoneName(0));
	SDK::FRotator angles = weapon->K2_GetActorRotation();

	SDK::FVector forwardvec = SDK::UKismetMathLibrary::GetRightVector(angles);

	TraceLineStruct trace = {};

	SDK::FHitResult out;
	trace.start = vec;
	trace.end = vec + forwardvec * 1000;
	trace.out = &out;
	bool hit = Utils::TraceLine(trace);
	BulletTraceStruct bullet = {};
	bullet.startpos = out.TraceStart;
	bullet.endpos = out.TraceEnd;
	bullet.ct = ImGui::GetTime();

	return bullet;
}

SDK::APlayerCharacter* Utils::GetLocalPlayerCharacter() noexcept
{
	return (SDK::APlayerCharacter*)GetPlayerController()->Character;
}


bool Utils::IsRotatorValid(SDK::FRotator ang) noexcept
{
	return (ang.Pitch != 0 && ang.Yaw != 0 && ang.Roll != 0);
}
