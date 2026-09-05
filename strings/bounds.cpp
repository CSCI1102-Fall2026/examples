#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "bounds";

    // this leads to undefined behavior
    cout << s[6] << endl;

    // this causes the program to end
    // with an exception
    cout << s.at(6) << endl;

    return 0;
}

