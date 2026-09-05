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

void selection_sort(int a[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_index = i;
        for (int j = i+1; j < n; j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }

        if (min_index != i) {
            swap(a[i], a[min_index]);
        }
    }
}

int main() {
    int n = 10;
    int a[] = {16, 3, 20, 11, 5, 9, 17, 6, 2, 5};

    print_array(a, n);
    selection_sort(a, n);
    print_array(a, n);
    return 0;
}

