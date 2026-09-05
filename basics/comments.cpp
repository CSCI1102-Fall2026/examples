#include <iostream>
#include <string>
using namespace std;

/* a program to practice cin, cout, and
 * comments in c++ */

int main() {
    
    // declare num to be an integer
    int num;

    // prompt the user to type a number
    cout << "Enter your favorite number: ";
    cin >> num;

    // print out a response (probably lying?)
    // wait, can a program have a favorite number?
    cout << "Wow! " << num << " is my favorite too!" << endl;

    return 0;
}
