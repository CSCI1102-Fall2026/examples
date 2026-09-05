#include <iostream>
using namespace std;

void stats(int data[], int length, int *min, int *max) {
    if (length == 0) {
        return;
    }
    if (min != NULL) {
        *min = data[0];
    }
    if (max != NULL) {
        *max = data[0];
    }
    for (int i = 1; i < length; i++) {
        if (min != NULL and data[i] < *min) {
            *min = data[i];
        }
        if (max != NULL and data[i] < *max) {
            *max = data[i];
        }
    }
}

int main() {
    int a[] = {5, -1, 3, -10, 0, 12, 4, -2, 2, 15};
    int length = 10;

    int smallest;
    stats(a, length, &smallest, NULL);
    cout << smallest << endl;

    return 0;
}

