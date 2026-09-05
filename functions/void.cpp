#include <iostream>
using namespace std;

void print_array(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i];
        if (i < size - 1) {
            cout << ",";
        }
    }
    cout << endl;
}

int main() {
    int values[] = {1, 2, 4, 8, 16};
    int size = 5;

    print_array(values, size);
    return 0;
}

