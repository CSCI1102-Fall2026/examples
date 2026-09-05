#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int size = 10;
    float values[size];

    cout << "Enter " << size << " numbers:" << endl;

    // can't use foreach here as we are changing the
    // array in the loop (need a reference value...)
    for (int i = 0; i < size; i++) {
        cin >> values[i];
    }
    cout << endl;

    for (float value: values) {
        for (int p = 1; p <= 3; p++) {
            cout << pow(value, p);
            if (p != 3) {
                cout << ",";
            }
        }
        cout << endl;
    }

    return 0;
}

