#pragma once
#include "../../sdk/SDK.hpp"
#include "../../utils/Utils.h"
namespace WeaponHack{
	inline std::vector< Utils::BulletTraceStruct> BulletTrace = {};


	void DoNoRecoil() noexcept;
	void DoInfiniteAmmo() noexcept;
	void DoLaserBeam() noexcept;
	bool hk_FireBullet(SDK::ABaseMagazineWeapon* obj, SDK::UFunction* pUFunc, SDK::Params::BaseMagazineWeapon_Server_OnFire* pParms, void* pResult);


}