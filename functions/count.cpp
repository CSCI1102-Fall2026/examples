#include <iostream>
using namespace std;

// use pass by ref for the two counts, since we
// can only return a single value otherwise
void count(int a[], int size, int& num_pos, int& num_neg) {
    num_pos = 0;
    num_neg = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] > 0) {
            num_pos++;
        } else if (a[i] < 0) {
            num_neg++;
        }
    }
}

int main() {
    int vals[] = {5, 1, -1, 0, -4, 1, 10, -3}; 
    int size = 8;

    int p, n;
    count(vals, size, p, n);

    cout << "#pos=" << p << endl;
    cout << "#neg=" << n << endl;
    cout << "#zero=" << size-n-p << endl;
    return 0;
}

