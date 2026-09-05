#include <iostream>
using namespace std;

bool mystery(int a[], int& sz, int t) {
    int newi = 0;
    for (int i = 0; i < sz; i++) {
        if (a[i] != t) {
            a[newi] = a[i];
            newi++;
        }
    }

    if (newi == sz) {
        return false;
    }
    
    sz = newi;
    return true;
}

int main() {
    int vals[] = {5, 3, 2, 1, 1, 2, 4, 2};
    int size = 8;

    for (int i = 0; i < size; i++) {
        cout << vals[i] << " ";
    }
    cout << endl;

    cout << mystery(vals, size, 2) << endl;
    for (int i = 0; i < size; i++) {
        cout << vals[i] << " ";
    }
    cout << endl;

    cout << mystery(vals, size, 2) << endl;
    for (int i = 0; i < size; i++) {
        cout << vals[i] << " ";
    }
    cout << endl;

    cout << mystery(vals, size, 5) << endl;
    for (int i = 0; i < size; i++) {
        cout << vals[i] << " ";
    }
    cout << endl;

    return 0;
}

