#include "MyMath.h"

#include <iostream>

using namespace std;

 

int main(int argc, char* argv[])
{
    int a = 10;

    int b = 2;


    cout << "a + b = " << TestDynamicLib::add(a, b) << endl;

    cout << "a - b = " << TestDynamicLib::minus(a, b) << endl;

    cout << "a * b = " << TestDynamicLib::mul(a, b) << endl;

    return 0;
}
