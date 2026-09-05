#include <iostream>
using namespace std;

int main() {
    float r;
    int c;

    // get a radius from the user
    cout << "Enter radius: ";
    cin >> r;

    // potential bug here 
    // no compiler errors or warnings are given!
    c = 2 * 3.14159 * r;
    cout << "c=" << c << endl;

    // if you wanted c to be an int for some reason, 
    // this makes it explicit and obvious:
    float real_c = 2 * 3.14159 * r;
    c = static_cast<int>(real_c);
    cout << "c=" << c << endl;

    return 0;
}
