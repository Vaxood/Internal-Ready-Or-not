#include "WeaponHack.h"
#include "../../config/Config.hpp"
#include "../../utils/Utils.h"
void WeaponHack::DoNoRecoil() noexcept
{

	SDK::ABaseMagazineWeapon* weapon = Utils::GetActiveWeapon();

	if (!weapon)
		return;

	SDK::TArray<SDK::FRotator> recoils = weapon->RecoilPattern;
	for (int i = 0; i < recoils.Num(); i++)
	{
		SDK::FRotator rot = recoils[i];
		rot.Pitch = 0;
		rot.Yaw = 0;
		rot.Roll = 0;

		recoils[i] = rot;
	}

	weapon->bCalculateProcRecoil = 0;
	weapon->FireRate = 0.001;

}


void WeaponHack::DoInfiniteAmmo() noexcept
{

	SDK::ABaseMagazineWeapon* weapon = Utils::GetActiveWeapon();
	
	if (!weapon)
		return;
	//std::cout << weapon << std::endl;
	if (weapon->bInfiniteAmmo == false)
		weapon->bInfiniteAmmo = true;
	




}

static float Math_Remap(const float value, const float inMin, const float inMax, const float outMin, const float outMax)
{
	return outMin + (((value - inMin) / (inMax - inMin)) * (outMax - outMin));
}

void WeaponHack::DoLaserBeam() noexcept
{
	 SDK::APlayerController* playercontroller = Utils::GetPlayerController();
	SDK::ABaseMagazineWeapon* weapon = Utils::GetActiveWeapon();
	if (weapon)
	{
		Utils::BulletTraceStruct bullet = Utils::GetWeaponMuzzleTrace(weapon);

		SDK::FVector2D startpos2d;
		SDK::FVector2D endpos2d;

		//printf("%f %f %f \n", out.TraceEnd.X, out.TraceEnd.Y, out.TraceEnd.Z);

		if (SDK::UGameplayStatics::ProjectWorldToScreen(playercontroller,bullet.startpos, &startpos2d, false) && SDK::UGameplayStatics::ProjectWorldToScreen(playercontroller,bullet.endpos, &endpos2d, false))
		{
			ImGui::GetBackgroundDrawList()->AddLine({ startpos2d.X,startpos2d.Y }, { endpos2d.X,endpos2d.Y }, ImColor{ 255,255,255 }, 1);

		}
		
	}

	
	for (const auto bullet : BulletTrace)
	{
		SDK::FVector2D startpos2d;
		SDK::FVector2D endpos2d;

		if (playercontroller->ProjectWorldLocationToScreen(bullet.startpos, &startpos2d, false) && playercontroller->ProjectWorldLocationToScreen(bullet.endpos, &endpos2d, false))
		{

			
		
			ImGui::GetBackgroundDrawList()->AddLine({ startpos2d.X,startpos2d.Y }, { endpos2d.X,endpos2d.Y }, ImColor{ 255.f,255.f,255.f,255.f * Math_Remap(ImGui::GetTime() - bullet.ct, 0, 1, 1, 0) }, 1);

		}
	}
	

}

bool WeaponHack::hk_FireBullet(SDK::ABaseMagazineWeapon* weapon, SDK::UFunction* pUFunc, SDK::Params::BaseMagazineWeapon_Server_OnFire* pParms, void* pResult)
{

	if (Utils::GetActiveWeapon() == weapon)
	{
		Utils::TraceLineStruct bullet = {};
		SDK::FHitResult out;
		SDK::FVector forwardvec = SDK::UKismetMathLibrary::GetForwardVector(pParms->Direction);
		bullet.start = pParms->SpawnLoc;
		


		bullet.end = pParms->SpawnLoc + forwardvec * 100000;
		bullet.out = &out;
		Utils::TraceLine(bullet);
		Utils::BulletTraceStruct bull = {};
		bull.startpos = out.TraceStart;
		bull.endpos = out.TraceEnd;
		bull.ct = ImGui::GetTime();
		BulletTrace.push_back(bull);
	}



	/*

		if (Utils::GetActiveWeapon() == weapon)
		{
			Utils::BulletTraceStruct bullet = Utils::GetWeaponMuzzleTrace(weapon);

			BulletTrace.push_back(bullet);
		}


	*/


	/*


	SDK::FHitResult out;
	Utils::TraceLineStruct trace;
	trace.start = SpawnLoc;
	trace.end = SpawnLoc + Direction * 1000;
	trace.out = &out;
	Utils::TraceLine(trace);

	BulletTraceStruct bullet = { out.TraceStart,out.TraceEnd };
	BulletTrace.push_back(bullet);
	*/

	return true;
}