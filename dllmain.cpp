#include "pch.h"

extern "C"
{
	__declspec(dllexport) void __cdecl ex_Launch()
	{

	}
	__declspec(dllexport) void __cdecl ex_GetUniqueHash(void* ptr)
	{
		srand(time(NULL));

		char* hash = (char*)ptr;
		for (int i = 0; i < 33; ++i)
			hash[i] = char(97 + rand() % 26);
	}
}

BOOL APIENTRY DllMain( HMODULE hModule,
					   DWORD  ul_reason_for_call,
					   LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

