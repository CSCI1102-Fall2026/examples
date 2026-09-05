#include <iostream>
using namespace std;

/* sample run:
 * Enter a non-negative integer: -4
 * must be non-negative!
 */
unsigned int stoui(string s) {
    if (s.at(0) == '-') {
        throw invalid_argument("");
    }
    return stoi(s);
}

int main() {
    string user_input;
    cout << "Enter a non-negative integer: ";
    cin >> user_input;

    try {
        unsigned int val = stoui(user_input);
        cout << val << endl;
    } catch (invalid_argument& e) {
        cout << "must be non-negative!" << endl;
        return 0;
    }
    return 0;
}

