#include <iostream>
#include <intrin.h>

using namespace std;

void intrinsic_test() {
    __m512d A = { 1.0, 2.0, 3.0, 4.0, 5.0 , 6.0, 7.0, 8.0 };
    __m512d B = { 1.0, 2.0, 3.0, 4.0, 5.0 , 6.0, 7.0, 8.0 };
    __m512d C = _mm512_add_pd(A, B);

    double* c = (double*)&C;

    for (int i = 0; i < 8; i++) {
        cout <<c[i] << endl;;
    }
}