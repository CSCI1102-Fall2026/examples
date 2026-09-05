#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3};
    int size = 3;

    for (int i = 0; i < size; i++) {
        cout << a[i] << endl;
    }

    cout << endl;

    // this is... bad
    for (int i = -5; i <= 5; i++) {
        cout << "a[" << i << "]=" << a[i] << endl;
    }
    // no really, you won't write normal code to
    // do anything like this because the results
    // are undefined (!)

    return 0;
}

