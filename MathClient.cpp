// MathClient.cpp : Client app for MathLibrary DLL.
// #include "pch.h" Uncomment for Visual Studio 2017 and earlier
#include <iostream>
#include "MathLibrary.h"

int main()
{

    int a;
    std::cout << "Enter a: ";
    std::cin >> a;
    if (fibonacci_init(a)) std::cout << "Prostoe";
    else std::cout << "Ne prostoe";
}