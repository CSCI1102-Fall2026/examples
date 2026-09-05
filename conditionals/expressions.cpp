#include <iostream>
using namespace std;

int main() {
    float a, b;
    cout << "Enter two non-negative numbers: ";
    cin >> a >> b;
    
    if (a < 0 || b < 0) {
        cout << "Those aren't both non-negative!" << endl;
        return 0;
    }

    if (a == 0 && b == 0) {
        cout << "Both can't be zero!" << endl;
        return 0;
    }

    float z = 1 / (a + b);
    cout << "Answer=" << z << endl;

    return 0;
}

