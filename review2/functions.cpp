#include <iostream>
using namespace std;

int f(int a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
    return a;
}

int main() {
    int a = 10;
    int b = 20;
    f(b, a);
    cout << a << endl;
    cout << b << endl;
    return 0;
}

