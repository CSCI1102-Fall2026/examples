#include <iostream>
using namespace std;

void f(float *p) {
    *p *= 2;
}

int main() {
    int size = 5;
    float data[] = {5.4, 2.1, 6.8, 1.9, 7.2};
    float *ptrs[size];

    for (int i = 0; i < size; i++) {
        ptrs[i] = &data[(i+1)%size];
    }

    f(ptrs[0]);
    f(ptrs[4]);

    for (int i = 0; i < size; i++) {
        cout << *(ptrs[i]) << endl;
    }

    return 0;
}

