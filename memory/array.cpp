#include <iostream>
using namespace std;

int main() {
    int length = 10;
    int vals[length];

    cout << "&vals    = " << &vals << endl;
    for (int i = 0; i < length; i++) {
        cout << "&vals[" << i << "] = " << &vals[i] << endl;
    }
    return 0;
}

