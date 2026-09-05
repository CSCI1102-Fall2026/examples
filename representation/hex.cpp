#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int val;
    cout << "Enter an integer: ";
    cin >> val;

    // showbase tells cout to print the 0x
    // hex tells cout to print the value in hexadecimal
    // both are persistent until changed
    cout << val << "==" << showbase << hex << val << endl;
    return 0;
}

