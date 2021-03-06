#include "stdafx.h"
#include "Emu/System.h"
#include "Emu/ARMv7/PSVFuncList.h"

#include "sceAudioIn.h"

s32 sceAudioInOpenPort(s32 portType, s32 grain, s32 freq, s32 param)
{
	throw EXCEPTION("");
}

s32 sceAudioInReleasePort(s32 port)
{
	throw EXCEPTION("");
}

s32 sceAudioInInput(s32 port, vm::ptr<void> destPtr)
{
	throw EXCEPTION("");
}


#define REG_FUNC(nid, name) reg_psv_func(nid, &sceAudioIn, #name, name)

psv_log_base sceAudioIn("SceAudioIn", []()
{
	sceAudioIn.on_load = nullptr;
	sceAudioIn.on_unload = nullptr;
	sceAudioIn.on_stop = nullptr;
	sceAudioIn.on_error = nullptr;

	REG_FUNC(0x638ADD2D, sceAudioInInput);
	REG_FUNC(0x39B50DC1, sceAudioInOpenPort);
	REG_FUNC(0x3A61B8C4, sceAudioInReleasePort);
	//REG_FUNC(0x566AC433, sceAudioInGetAdopt);
});
