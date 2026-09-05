#include <iostream>
using namespace std;

int main() {
    // 5 and 4 are ints, so the result is an int
    cout << 5 + 4 << endl;

    // 5.1 is a float so the result is a float
    cout << 5.1 + 4 << endl;

    // 5 and 4 are ints, so the result is an int
    // this is integer division, i.e., only the whole number
    // answer is taken as the result
    cout << 5 / 4 << endl;

    // 4.0 is a float, so the result is a float
    cout << 5 / 4.0 << endl;

    // a will be 1.25
    float a = 5 / 4.0;
    cout << a << endl;

    // b will be 1
    // 5/4.0 is the float 1.25, the implicit conversion to int
    int b = 5 / 4.0;
    cout << b << endl;

    // the important one: c is 1.0
    // 5/4 is the int 1
    // it doesn't matter that the result variable is a float
    float c = 5 / 4;
    cout << c << endl;

    return 0;
}
