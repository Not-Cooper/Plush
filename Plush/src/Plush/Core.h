#pragma once

// Macro to dllexport or import depending on whether or not the dll is being built

// declspec is only a thing on windows
#ifdef PL_PLATFORM_WINDOWS
	#ifdef PL_BUILD_DLL
		#define PLUSH_API __declspec(dllexport)
	#else
		#define PLUSH_API __declspec(dllimport)
	#endif
#else
	#error Plush only supports windows
#endif // HZ_PLATFORM_WINDOWS
