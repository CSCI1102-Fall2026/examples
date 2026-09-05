#include <iostream>
using namespace std;

void f(int a, int& b) {
    cout << "   f(): &a = " << &a << endl;
    cout << "   f(): &b = " << &b << endl;
}

int main() {
    int x=1, y=2;
    cout << "main(): &x = " << &x << endl;
    cout << "main(): &y = " << &y << endl;
    f(x, y);
    return 0;
}

