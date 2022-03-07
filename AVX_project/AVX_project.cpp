// AVX_project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


extern void compiler_test();
extern void intrinsic_test();
extern void asm_test();

int main()
{
    cout << "Running compiler_test()" << endl;
    compiler_test();

    cout << "Running intrinsic_test()" << endl;
    intrinsic_test();

    cout << "Running compiler_test()" << endl;
    asm_test();

}

