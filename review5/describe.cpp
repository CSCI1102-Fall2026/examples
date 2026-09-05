#include <iostream>
using namespace std;

void mystery(int *a, int n) {
    int *b = new int[n];
    int i = 0;
    int j = n-1;
    for (int k = 0; k < n; k++) {
        if (a[k] < 0) {
            b[i] = a[k];
            i++;
        }
        if (a[k] > 0) {
            b[j] = a[k];
            j--;
        }
    }

    for (int k = 0; k < n; k++) {
        a[k] = b[k];
    }
    delete b;
}

void print(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[] = {-5, 1, 3, 0, -3, 0, -1, 4, 0, -2};
    int n = 10;
    mystery(a, n);
    print(a, n);

    return 0;
}

