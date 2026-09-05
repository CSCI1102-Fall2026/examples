#include <iostream>
#include <iomanip>
using namespace std;

void print_array(int a[], int n) {
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << setw(3) << a[i];
        if (i != n-1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
}

void swap(int& x, int& y) {
    int tmp = x;
    x = y;
    y = tmp;
}

void bubble_sort(int a[], int n) {
    bool did_a_swap = true;
    while (did_a_swap) {
        did_a_swap = false;
        for (int i = 0; i < n-1; i++) {
            if (a[i] > a[i+1]) {
                swap(a[i], a[i+1]);
                did_a_swap = true;
            }
        }
    }
}

int main() {
    int n = 10;
    int a[] = {16, 3, 20, 11, 5, 9, 17, 6, 2, 5};

    print_array(a, n);
    bubble_sort(a, n);
    print_array(a, n);
    return 0;
}

