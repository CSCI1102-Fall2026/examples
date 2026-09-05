#include <iostream>
using namespace std;

void f(int a[]) {
    cout << "Start of f,    a[0]=" << a[0] << endl;
    a[0]++;
    cout << "End of f,      a[0]=" << a[0] << endl;
}

int main() {
    int a[] = {42};
    cout << "Start of main, a[0]=" << a[0] << endl;
    f(a);
    cout << "End of main,   a[0]=" << a[0] << endl;
    return 0;
}

