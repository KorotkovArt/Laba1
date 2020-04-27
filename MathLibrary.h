// MathLibrary.h - Contains declarations of math functions
#pragma once

#ifdef LIB EXPORT
#define LIB_API __declspec(dllexport)
#else
#define LIB_API __declspec(dllimport)
#endif

extern "C" LIB_API bool fibonacci_init(int a);
