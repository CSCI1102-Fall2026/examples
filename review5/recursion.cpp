#include <iostream>
#include <string>
using namespace std;

int rf(string s) {
    if (s.length() == 0) {
        return 1;
    }
    if (s.length() == 1) {
        cout << s << endl;
        return 2;
    }
    if (s.length() % 2 == 0) {
        cout << s.at(0) << endl;
        return 1 + rf(s.substr(1,s.length()-1));
    } else {
        cout << s.at(s.length()-1) << endl;
        return 2 + rf(s.substr(0,s.length()-1));
    }
}

int main() {
    cout << rf("program") << endl;
    return 0;
}

