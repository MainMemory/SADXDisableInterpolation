#include "pch.h"
#include "SADXModLoader.h"
#include "UsercallFunctionHandler.h"

UsercallFuncVoid(sub_4051D0, (NJS_MOTION* motion, float frameNumber), (motion, frameNumber), 0x4051D0, rESI, stack4);
void sub_4051D0_r(NJS_MOTION* motion, float frameNumber)
{
	sub_4051D0.Original(motion, floorf(frameNumber));
}

extern "C"
{
	__declspec(dllexport) void Init(const char* path, const HelperFunctions& helperFunctions)
	{
		sub_4051D0.Hook(sub_4051D0_r);
	}

	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}