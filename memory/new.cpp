#include <iostream>
using namespace std;

int *get_data(int size) {
    int *vals = new int[size];
    cout << "Enter " << size << " numbers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> vals[i];
    }
    return vals;
}

void print_array(int a[], int length) {
    for (int i = 0; i < length; i++) {
        cout << a[i];
        if (i != length-1) {
            cout << ",";
        } else {
            cout << endl;
        }
    }
}

int main() {
    int size = 5;
    int *x = get_data(size);

    print_array(x, size);
    return 0;
}

