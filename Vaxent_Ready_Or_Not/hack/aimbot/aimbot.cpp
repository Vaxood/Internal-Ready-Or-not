#include "aimbot.h"
#include "../../utils/Utils.h"
#include "../../config/config.hpp"


constexpr auto degreesToRadians = [](float degrees) constexpr noexcept { return degrees * 3.141592653589793238462643383279 / 180.0f; };
constexpr auto radiansToDegrees = [](float radians) constexpr noexcept { return radians * 180.0f / 3.141592653589793238462643383279; };

inline SDK::FRotator toAngle(SDK::FVector pos)
{
	return SDK::FRotator(radiansToDegrees(atan2(-pos.Z, hypot(pos.X, pos.Y))),
		radiansToDegrees(atan2(pos.Y, pos.X)),
		0.0f);
}

SDK::FRotator CalculeEnemyAngle(SDK::FVector localposition, SDK::FVector enemypostion, SDK::FRotator viewangle)
{

	
	SDK::FRotator finaleangle = toAngle(enemypostion - localposition);
	return finaleangle;
}


bool Aimbot::Do(SDK::AActor* actor, float deltatime) noexcept
{
	const SDK::TArray<SDK::ACyberneticCharacter*> allbots = Utils::GetGameState()->AllAICharacters;
	SDK::APlayerController* playercontroller = Utils::GetPlayerController();
	SDK::FVector localpos = playercontroller->Character->Mesh->GetSocketLocation(Utils::head);
	float fov = Config::Aim_Weapon::fov_value / 12;
	SDK::FRotator ang;
	for (int i = 0; i < allbots.Num(); i++)
	{
		const SDK::ACyberneticCharacter* bot = allbots[i];
		if (bot->IsLocalPlayer())
			continue;
	

	

		SDK::FVector enemypos = bot->Mesh->GetSocketLocation(Utils::head);

		ang = CalculeEnemyAngle(localpos, enemypos,playercontroller->ControlRotation);

		float fov2 = std::hypot(ang.Pitch, ang.Yaw);
		if (fov2 < fov)
		{
		
			fov = fov2;
		}

	}

	if (Utils::IsRotatorValid(ang))
	{
		//printf("Founded ang : %f %f %f \n", ang.Pitch, ang.Yaw, ang.Roll);
		///	playercontroller->ClientSetRotation(ang , true);


	}
	


	return true;
}