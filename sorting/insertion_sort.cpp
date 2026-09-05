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

void insertion_sort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int current = a[i];

        int j = i-1;
        while (j >= 0 and a[j] > current) {
            a[j+1] = a[j];
            j--;
        }
        
        a[j+1] = current;
    }
}

int main() {
    int n = 10;
    int a[] = {16, 3, 20, 11, 5, 9, 17, 6, 2, 5};

    print_array(a, n);
    insertion_sort(a, n);
    print_array(a, n);
    return 0;
}

