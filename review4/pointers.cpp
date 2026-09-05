#include <iostream>
#include <string>
using namespace std;

void f(string *p) {
    *p = "f";
}

void g(string *p) {
    p = new string("g");
}

int main() {
    int num_strs = 5;
    string *strs[num_strs];
    for (int i = 0; i < num_strs; i++) {
        strs[i] = new string("main");
    }

    for (int i = 0; i < num_strs; i += 2) {
        f(strs[i]);
    }

    for (int i = 1; i < num_strs; i += 2) {
        g(strs[i]);
    }

    for (int i = 0; i < num_strs; i++) {
        cout << *strs[i] << endl;
    }

    return 0;
}
