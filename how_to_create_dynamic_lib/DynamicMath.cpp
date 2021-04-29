#include<iostream>
#include"MyMath.h"

int TestDynamicLib::add(int a, int b)
{
   std::cout<<"TestDynamicLib, From Math.cpp, add(int a, int b)"<<std::endl;
   return a+b;
}

int TestDynamicLib::minus(int a, int b)
{
   std::cout<<"TestDynamicLib, From Math.cpp, minus(int a, int b)"<<std::endl;
   return a - b;
}

int TestDynamicLib::mul(int a, int b)
{
   std::cout<<"TestDynamicLib, From Math.cpp, mul(int a, int b)"<<std::endl;
   return a * b;
}

