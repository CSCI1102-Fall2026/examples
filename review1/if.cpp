#include <iostream>
#include <string>
using namespace std;

int main() {
    int i;
    string s;
    cin >> i >> s;

    if (i > 50) {
        if (i < 100 || s == "bob") {
            cout << "A";
        }
        if (s == "BOB") {
            cout << "B";
        }
    } else if (s != "bob") {
        if (i > 0 && s == "barb") {
            cout << "C";
        } else {
            cout << "D";
        }
    } else {
        cout << "E";
    }
    cout << endl;
    return 0;
}
