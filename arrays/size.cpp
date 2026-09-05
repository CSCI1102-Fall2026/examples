#include <iostream>
using namespace std;

int main() {
    int size = 4;
    float values[size];

    cout << "Enter " << size << " numbers:" << endl;

    for (int i = 0; i < size; i++) {
        cin >> values[i];
    }

    cout << endl << "In reverse order:" << endl;
    for (int i = size-1; i >= 0; i--) {
        cout << values[i] << endl;
    }

    return 0;
}

