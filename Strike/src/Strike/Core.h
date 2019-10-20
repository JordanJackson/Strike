#pragma once

#ifdef STRIKE_PLATFORM_WINDOWS
	#ifdef STRIKE_BUILD_DLL
		#define STRIKE_API __declspec(dllexport)
	#else
		#define STRIKE_API __declspec(dllimport)
	#endif
#else
	#error Strike only supports Windows!
#endif