// MathLibrary.cpp : Defines the exported functions for the DLL.
#define LIB_EXPORT
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <utility>
#include <limits.h>
#include "MathLibrary.h"
#include <iostream>
using namespace std;

// Initialize a Fibonacci relation sequence
// such that F(0) = a, F(1) = b.
// This function must be called before any other function.
bool fibonacci_init(int a)
{
    if (a > 1)
    {
        for (int i = 2; i < a; i++)
            if (a % i == 0) return false;
        return true;
    }
    else return false;
}
