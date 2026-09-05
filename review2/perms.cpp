#include <iostream>
using namespace std;

void perm3(char letters[], int size) {
    if (size < 3) {
        return;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                char a = letters[i];
                char b = letters[j];
                char c = letters[k];
                if (a != b && a != c && b != c) {
                    cout << a << b << c << endl;
                }
            }
        }
    }
}

int main() {
    char a[] = {'a','b','c','d'};

    perm3(a, 2);
    cout << endl;
    perm3(a, 3);
    cout << endl;
    perm3(a, 4);

    return 0;
}
