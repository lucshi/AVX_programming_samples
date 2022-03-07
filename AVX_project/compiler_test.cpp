#include <iostream>
using namespace std; 

void compiler_test() {
    double A[8] = { 1.0, 2.0, 3.0, 4.0, 5.0 , 6.0, 7.0, 8.0 };
    double B[8] = { 1.0, 2.0, 3.0, 4.0, 5.0 , 6.0, 7.0, 8.0 };
    double C[8];

    for (int i = 0; i < 8; i++) {
        C[i] = A[i] + B[i];
    }

    for (int i = 0; i < 8; i++) {
        cout << C[i] << endl;;
    }
}