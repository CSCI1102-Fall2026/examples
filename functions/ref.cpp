#include <iostream>
using namespace std;

void f(int& x) {
    cout << "Start of f,    x=" << x << endl;
    x++;
    cout << "End of f,      x=" << x << endl;
}

int main() {
    int x = 42;
    cout << "Start of main, x=" << x << endl;
    f(x);
    cout << "End of main,   x=" << x << endl;
    return 0;
}

