#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter an integer x: ";
    cin >> x;

    // incorrect!
    if (x = 1) {
        cout << "x is one!" << endl;
    }

    cout << "x was " << x << endl;

    return 0;
}

