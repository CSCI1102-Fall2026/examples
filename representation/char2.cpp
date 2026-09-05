#include <iostream>
#include <iomanip>
using namespace std;

void print_binary(unsigned int i) {
    unsigned int result = i >> 1;
    if (result) {
        print_binary(result);
    }
    cout << (i & 1);
}

int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;

    unsigned int val = c;
    cout << c << "==" << val << "==" << showbase << hex << val << "==";
    cout << dec << "0b";
    print_binary(val);
    cout << endl;
    return 0;
}

