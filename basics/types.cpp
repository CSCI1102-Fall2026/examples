#include <iostream>
using namespace std;

int main() {
    float w = 1.999;
    int x = w;
    // x will be 1
    cout << x << endl;

    int y = 'A';
    // y will be 65
    cout << y << endl;

    float z = 'A';
    // z will be 65.0 (prints as 65)
    cout << z << endl;

    float a = x;
    // a will be 1.0 (prints as 1)
    cout << a << endl;

    char c = 66.77;
    // c will be 'B'
    cout << c << endl;

    return 0;
}
