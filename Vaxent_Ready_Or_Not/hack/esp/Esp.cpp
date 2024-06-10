#include "Esp.h"
#include "../../ext/imgui.h"
#include "../../ext/imgui_impl_dx11.h"
#include "../../ext/imgui_impl_win32.h"
#include "../../utils/Utils.h"
#include "../../sdk/SDK.hpp"
#include "../../config/Config.hpp"
int maxbone = 0;


bool GetEntityBounds(const SDK::ACyberneticCharacter* Entity, float& x, float& y, float& w, float& h,const SDK::APlayerController* playercontroller, SDK::FVector Origin, SDK::FVector headpos)
{

	SDK::FVector2D flb, brt, blb, frt, frb, brb, blt, flt;

	SDK::FVector bounds ;
 
	Entity->GetActorBounds(true, nullptr, &bounds, true);
	bounds.Z = (headpos - Origin).Z;

	SDK::FVector Min = SDK::FVector(bounds.X * -1, bounds.Y *-1, 0) + Origin;
	SDK::FVector Max = bounds + Origin;



	SDK::FVector points[] = { SDK::FVector(Min.X, Min.Y, Min.Z),
							SDK::FVector(Min.X, Max.Y, Min.Z),
							SDK::FVector(Max.X, Max.Y, Min.Z),
							SDK::FVector(Max.X, Min.Y, Min.Z),
							SDK::FVector(Max.X, Max.Y, Max.Z),
							SDK::FVector(Min.X, Max.Y, Max.Z),
							SDK::FVector(Min.X, Min.Y, Max.Z),
							SDK::FVector(Max.X, Min.Y, Max.Z) };

	if (!playercontroller->ProjectWorldLocationToScreen(points[3], &flb, false) || !playercontroller->ProjectWorldLocationToScreen(points[5], &brt, false)
		|| !playercontroller->ProjectWorldLocationToScreen(points[0], &blb, false) || !playercontroller->ProjectWorldLocationToScreen(points[4], &frt, false)
		|| !playercontroller->ProjectWorldLocationToScreen(points[2], &frb, false) || !playercontroller->ProjectWorldLocationToScreen(points[1], &brb, false)
		|| !playercontroller->ProjectWorldLocationToScreen(points[6], &blt, false) || !playercontroller->ProjectWorldLocationToScreen(points[7], &flt, false))
	{
		SDK::FVector bounss = Entity->GetActorRelativeScale3D();
		
		return false;
	}
	

	const SDK::FVector2D vTransformed[8] = { frb, brb, blb, flb, frt, brt, blt, flt };

	float left = flb.X;		// left
	float top = flb.Y;		// top
	float right = flb.X;	// right
	float bottom = flb.Y;	// bottom

	for (int i = 1; i < 8; i++)
	{
		if (left > vTransformed[i].X)
			left = vTransformed[i].X;
		if (top < vTransformed[i].Y)
			top = vTransformed[i].Y;
		if (right < vTransformed[i].X)
			right = vTransformed[i].X;
		if (bottom > vTransformed[i].Y)
			bottom = vTransformed[i].Y;
	}

	x = left;
	y = bottom;
	w = right - left;
	h = top - bottom;

	return true;
}


void Esp::Do() noexcept
{
	if (!Config::Esp::enable)
		return;

	if (!Utils::IsInGame())
		return;


	ImGui::GetBackgroundDrawList()->AddCircle(ImVec2(ImGui::GetIO().DisplaySize.x / 2, ImGui::GetIO().DisplaySize.y / 2), Config::Aim_Weapon::fov_value, ImColor(255,255,255), 100, 1.5f);




	const SDK::APlayerController* playercontroller = Utils::GetPlayerController();

	

	const SDK::TArray<SDK::ACyberneticCharacter*> charactere = Utils::GetGameState()->AllAICharacters;
	for (int i = 0; i < charactere.Num(); i++)
	{
		 const SDK::ACyberneticCharacter* actor = charactere[i];
		 if (!actor)
			 continue;
		 if (!actor->RootComponent)
			 continue;
		 if (actor->IsDeadNotUnconscious())
			 continue;
		 if (!Utils::ShouldLoop(actor))
			 continue;
	
		 const SDK::FVector feat_l = actor->Mesh->GetSocketLocation(Utils::feet_l);
		 const SDK::FVector feat_r = actor->Mesh->GetSocketLocation(Utils::feet_r);

		 SDK::FVector vector{ 0, 0, 0 };
		 vector.X = feat_l.X + feat_r.X;
		 vector.Y = feat_l.Y + feat_r.Y;
		 vector.Z = feat_l.Z + feat_r.Z;
		
		SDK::FVector vector2{ 0, 0, 0 };
		vector2.X = vector.X / 2;
		vector2.Y = vector.Y / 2;
		vector2.Z = vector.Z / 2;

		const SDK::FVector origin = vector2;
		const SDK::FVector head_pos = actor->Mesh->GetSocketLocation(Utils::head);
		
		/*
		SDK::TArray<SDK::USkeletalMeshComponent*> materials = actor->CustomizationSkeletalMeshes;
		std::cout << materials.Num() << std::endl;
		for (int i = 0; i < materials.Num(); i++)
		{
			SDK::USkeletalMeshComponent* material = materials[i];
			if (!material)
				continue;
			SDK::UMaterialInstanceDynamic* MaterialInstance = material->CreateAndSetMaterialInstanceDynamic(i);

			SDK::TArray<SDK::FVectorParameterValue>  parameters = MaterialInstance->VectorParameterValues; 

			for (int i2 = 0; i < parameters.Num(); i2++)
			{
				SDK::FVectorParameterValue Value = parameters[i2];
				SDK::FLinearColor color = MaterialInstance->K2_GetVectorParameterValue(Value.ParameterInfo.Name);
				SDK::FLinearColor ChamColor = SDK::FLinearColor(1.f, 0.f, 0.f, 1.f);
				SDK::UKismetMaterialLibrary::SetVectorParameterValue(Utils::world, (SDK::UMaterialParameterCollection*)material, Value.ParameterInfo.Name, ChamColor);




			}
	


		}
		*/

		/*
			material->GetBaseMaterial()->bDisableDepthTest = false;
			material->GetBaseMaterial()->BlendMode = SDK::EBlendMode::BLEND_Translucent;
		
		*/

		 SDK::FVector2D feat;
		 SDK::FVector2D head;

		/*
		 
		 if (playercontroller->ProjectWorldLocationToScreen(origin, &feat, true) && playercontroller->ProjectWorldLocationToScreen(head_pos, &head, true))
		 {
		
			if(Utils::WantBox(actor))
			{
				 const float h = feat.Y - head.Y;
				 const float w = h * 0.35f;

				
				ImGui::GetBackgroundDrawList()->AddRect({ head.X - w,head.Y }, { head.X + w,feat.Y }, Utils::GetColorByTeam(actor));

				SDK::FVector bounds;
				actor->GetActorBounds(false, nullptr, &bounds, false);


			
			//	ImGui::GetBackgroundDrawList()->AddText({ feat.X,feat.Y }, ImColor(255, 255, 255), ddv.c_str());
			}
			
			 

			
		 }
		 */
		 
		 
			float x, y, w, h;
			bool boundess = GetEntityBounds(actor, x, y, w, h, playercontroller, origin, head_pos);
		
			if (boundess)
			{
				if (Utils::WantBox(actor))
				{
					ImGui::GetBackgroundDrawList()->AddRect({ x, y }, { x + w, y + h }, Utils::GetColorByTeam(actor));
				}

			}
			
		 if (Utils::WantSkeleton(actor))
		 {
			
		


			 for (int i = 0; i < actor->Mesh->GetNumBones(); i++)
			 {
				 
				
			
				 const SDK::FName bone = actor->Mesh->GetBoneName(i);
				 if ( Utils::Find(bone.ToString(),"hlp") || Utils::Find(bone.ToString(), "twist") || Utils::Find(bone.ToString(), "extra") || Utils::Find(bone.ToString(), "Root") || Utils::Find(bone.ToString(), "camera") || Utils::Find(bone.ToString(), "weapon"))
					 continue;
				 
			

				 const SDK::FVector boneloc = actor->Mesh->GetSocketLocation(bone);
				 SDK::FVector2D bone2d;
				
				 const SDK::FName boneparent = actor->Mesh->GetParentBone(bone);
				 if (Utils::Find(boneparent.ToString(), "hlp") || Utils::Find(boneparent.ToString(), "twist") || Utils::Find(boneparent.ToString(), "extra") || Utils::Find(boneparent.ToString(), "Root") || Utils::Find(boneparent.ToString(), "camera") || Utils::Find(boneparent.ToString(), "weapon"))
					 continue;

				 if (boneparent.ToString().starts_with("ik_") || bone.ToString().starts_with("ik_"))
					 continue;
				// if (i >= maxbone)
				//	 continue;
				 const SDK::FVector boneparentloc = actor->Mesh->GetSocketLocation(boneparent);

				 SDK::FVector2D boneparent2d;

				 if (!playercontroller->ProjectWorldLocationToScreen(boneloc, &bone2d, true) || !playercontroller->ProjectWorldLocationToScreen(boneparentloc, &boneparent2d, true))
					 continue;
			

				 ImGui::GetBackgroundDrawList()->AddLine({ bone2d.X,bone2d.Y }, { boneparent2d.X,boneparent2d.Y }, ImColor(255.f, 255.f, 255.f));
				 //ImGui::GetBackgroundDrawList()->AddText({ bone2d.X,bone2d.Y }, ImColor(255, 255, 255), bone.ToString().c_str());


			 }

			 

		 }


	}

	
}







