#include <iostream>
using namespace std;

int main() {
    int a1[] = {5, 3, 9, 4, 1, 0, 4};
    int a2[] = {2, 9, 1, 4, 8, 4, 7};
    int size = 7;
    int a3[size];
    int i;

    for (i = 0; i < size; i++) {
        a3[i] = a1[i] + a2[size-i-1];
    }

    for (i--; i >= 0; i -= 2) {
        cout << a3[i] << endl;
    }

    return 0;
}

