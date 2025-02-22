#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SoundVisualizations

#include "Basic.hpp"

#include "SoundVisualizations_classes.hpp"
#include "SoundVisualizations_parameters.hpp"


namespace SDK
{

// Function SoundVisualizations.SoundVisualizationStatics.CalculateFrequencySpectrum
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USoundWave*                       SoundWave                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Channel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   StartTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   TimeLength                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   SpectrumWidth                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                           OutSpectrum                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USoundVisualizationStatics::CalculateFrequencySpectrum(class USoundWave* SoundWave, int32 Channel, float StartTime, float TimeLength, int32 SpectrumWidth, TArray<float>* OutSpectrum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SoundVisualizationStatics", "CalculateFrequencySpectrum");

	Params::SoundVisualizationStatics_CalculateFrequencySpectrum Parms{};

	Parms.SoundWave = SoundWave;
	Parms.Channel = Channel;
	Parms.StartTime = StartTime;
	Parms.TimeLength = TimeLength;
	Parms.SpectrumWidth = SpectrumWidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSpectrum != nullptr)
		*OutSpectrum = Parms.OutSpectrum;
}


// Function SoundVisualizations.SoundVisualizationStatics.GetAmplitude
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USoundWave*                       SoundWave                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Channel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   StartTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   TimeLength                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   AmplitudeBuckets                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                           OutAmplitudes                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USoundVisualizationStatics::GetAmplitude(class USoundWave* SoundWave, int32 Channel, float StartTime, float TimeLength, int32 AmplitudeBuckets, TArray<float>* OutAmplitudes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SoundVisualizationStatics", "GetAmplitude");

	Params::SoundVisualizationStatics_GetAmplitude Parms{};

	Parms.SoundWave = SoundWave;
	Parms.Channel = Channel;
	Parms.StartTime = StartTime;
	Parms.TimeLength = TimeLength;
	Parms.AmplitudeBuckets = AmplitudeBuckets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAmplitudes != nullptr)
		*OutAmplitudes = Parms.OutAmplitudes;
}

}

