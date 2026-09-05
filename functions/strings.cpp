#include <iostream>
#include <string>
using namespace std;

void f(string s) {
    cout << "Start of f,    s=" << s << endl;
    s = "function";
    cout << "End of f,      s=" << s << endl;
}

int main() {
    string s = "main";
    cout << "Start of main, s=" << s << endl;
    f(s);
    cout << "End of main,   s=" << s << endl;
    return 0;
}

