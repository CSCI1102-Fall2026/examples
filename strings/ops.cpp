#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "C++";
    s1 += " > Java";

    string s2 = s1 + "?";
    cout << s2 << ": " << s2.length() << endl;

    s2[10] = '!';
    cout << s2 << endl;

    s2.append("!!");
    cout << s2 << endl;

    for (char c : s2) {
        cout << c << endl;
    }

    for (size_t i = 0; i < s2.length(); i += 2) {
        cout << s2.at(i) << endl;
    }

    return 0;
}

