#pragma once
#include <Windows.h>

//NO LONGER WORKING SINCE PATCH 1.000.400
class bypass
{
private:
	void PatchBytes();

public:
	bypass();

	bool bBypassed = false;
	void Patch();
};
extern bypass g_Bypass;