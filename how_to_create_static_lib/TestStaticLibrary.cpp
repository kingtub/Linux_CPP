#include "MyMath.h"

#include <iostream>

using namespace std;

 

int main(int argc, char* argv[])
{
    int a = 10;

    int b = 2;


    cout << "a + b = " << TestStaticLib::add(a, b) << endl;

    cout << "a - b = " << TestStaticLib::minus(a, b) << endl;

    cout << "a * b = " << TestStaticLib::mul(a, b) << endl;

    return 0;
}
