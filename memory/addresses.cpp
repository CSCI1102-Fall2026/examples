#include <iostream>
using namespace std;

int global_variable = 1;

void f() {
    int f_x = 2;
    cout << &f_x << " = address of f_x" << endl;
}

int main() {
    int main_x = 3;
    cout << &global_variable << " = address of global_variable" << endl;
    f();
    cout << &main_x << " = address of main_x" << endl;
    return 0;
}

