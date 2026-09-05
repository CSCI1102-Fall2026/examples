#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int limit = 6;
    int j, inner;

    while (i < limit) {
        if (i <= 3) {
            inner = i;
        } else {
            inner = limit - i;
        }
        j = 1;
        while (j <= inner) {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
