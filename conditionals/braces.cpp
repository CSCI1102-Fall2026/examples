#include <iostream>
using namespace std;

int main() {
    float num;
    cout << "Enter a number: ";
    cin >> num;

    // all three of these are the same
    if (num > 0) {
        cout << "Positive!" << endl;
    }

    if (num > 0)
        cout << "Positive!" << endl;

    if (num > 0) { cout << "Positive!" << endl; }

    return 0;
}

