#include<iostream>
#include"MyMath.h"

int TestStaticLib::add(int a, int b)
{
   std::cout<<"From Math.cpp, add(int a, int b)"<<std::endl;
   return a+b;
}

int TestStaticLib::minus(int a, int b)
{
   std::cout<<"From Math.cpp, minus(int a, int b)"<<std::endl;
   return a - b;
}

int TestStaticLib::mul(int a, int b)
{
   std::cout<<"From Math.cpp, mul(int a, int b)"<<std::endl;
   return a * b;
}

