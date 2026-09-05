#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    try {
        size_t len = s.length();
        for (size_t i = 0; i < len; i++) {
            s += s.at(i);
        }

        len = s.length();
        for (size_t i = len-1; i > 0; i--) {
            s += s.at(i);
        }
    } catch (out_of_range& e) {
        cout << "exception!" << endl;
    }

    cout << s << endl;
    return 0;
}

