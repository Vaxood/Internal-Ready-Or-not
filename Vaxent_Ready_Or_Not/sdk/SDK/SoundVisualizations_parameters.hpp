#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SoundVisualizations

#include "Basic.hpp"


namespace SDK::Params
{

// Function SoundVisualizations.SoundVisualizationStatics.CalculateFrequencySpectrum
// 0x0028 (0x0028 - 0x0000)
struct SoundVisualizationStatics_CalculateFrequencySpectrum final 
{
public:
	class USoundWave*                             SoundWave;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Channel;                                           // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartTime;                                         // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeLength;                                        // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SpectrumWidth;                                     // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                 OutSpectrum;                                       // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(SoundVisualizationStatics_CalculateFrequencySpectrum) == 0x000008, "Wrong alignment on SoundVisualizationStatics_CalculateFrequencySpectrum");
static_assert(sizeof(SoundVisualizationStatics_CalculateFrequencySpectrum) == 0x000028, "Wrong size on SoundVisualizationStatics_CalculateFrequencySpectrum");
static_assert(offsetof(SoundVisualizationStatics_CalculateFrequencySpectrum, SoundWave) == 0x000000, "Member 'SoundVisualizationStatics_CalculateFrequencySpectrum::SoundWave' has a wrong offset!");
static_assert(offsetof(SoundVisualizationStatics_CalculateFrequencySpectrum, Channel) == 0x000008, "Member 'SoundVisualizationStatics_CalculateFrequencySpectrum::Channel' has a wrong offset!");
static_assert(offsetof(SoundVisualizationStatics_CalculateFrequencySpectrum, StartTime) == 0x00000C, "Member 'SoundVisualizationStatics_CalculateFrequencySpectrum::StartTime' has a wrong offset!");
static_assert(offsetof(SoundVisualizationStatics_CalculateFrequencySpectrum, TimeLength) == 0x000010, "Member 'SoundVisualizationStatics_CalculateFrequencySpectrum::TimeLength' has a wrong offset!");
static_assert(offsetof(SoundVisualizationStatics_CalculateFrequencySpectrum, SpectrumWidth) == 0x000014, "Member 'SoundVisualizationStatics_CalculateFrequencySpectrum::SpectrumWidth' has a wrong offset!");
static_assert(offsetof(SoundVisualizationStatics_CalculateFrequencySpectrum, OutSpectrum) == 0x000018, "Member 'SoundVisualizationStatics_CalculateFrequencySpectrum::OutSpectrum' has a wrong offset!");

// Function SoundVisualizations.SoundVisualizationStatics.GetAmplitude
// 0x0028 (0x0028 - 0x0000)
struct SoundVisualizationStatics_GetAmplitude final 
{
public:
	class USoundWave*                             SoundWave;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Channel;                                           // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartTime;                                         // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeLength;                                        // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AmplitudeBuckets;                                  // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                 OutAmplitudes;                                     // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(SoundVisualizationStatics_GetAmplitude) == 0x000008, "Wrong alignment on SoundVisualizationStatics_GetAmplitude");
static_assert(sizeof(SoundVisualizationStatics_GetAmplitude) == 0x000028, "Wrong size on SoundVisualizationStatics_GetAmplitude");
static_assert(offsetof(SoundVisualizationStatics_GetAmplitude, SoundWave) == 0x000000, "Member 'SoundVisualizationStatics_GetAmplitude::SoundWave' has a wrong offset!");
static_assert(offsetof(SoundVisualizationStatics_GetAmplitude, Channel) == 0x000008, "Member 'SoundVisualizationStatics_GetAmplitude::Channel' has a wrong offset!");
static_assert(offsetof(SoundVisualizationStatics_GetAmplitude, StartTime) == 0x00000C, "Member 'SoundVisualizationStatics_GetAmplitude::StartTime' has a wrong offset!");
static_assert(offsetof(SoundVisualizationStatics_GetAmplitude, TimeLength) == 0x000010, "Member 'SoundVisualizationStatics_GetAmplitude::TimeLength' has a wrong offset!");
static_assert(offsetof(SoundVisualizationStatics_GetAmplitude, AmplitudeBuckets) == 0x000014, "Member 'SoundVisualizationStatics_GetAmplitude::AmplitudeBuckets' has a wrong offset!");
static_assert(offsetof(SoundVisualizationStatics_GetAmplitude, OutAmplitudes) == 0x000018, "Member 'SoundVisualizationStatics_GetAmplitude::OutAmplitudes' has a wrong offset!");

}

