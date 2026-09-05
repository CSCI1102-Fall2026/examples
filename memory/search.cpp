#include <iostream>
using namespace std;

// return type is a pointer to an int
int *search(int data[], int length, int target) {
    for (int i = 0; i < length; i++) {
        if (data[i] == target) {
            int *match = &data[i];
            return match;
        }
    }
    // return NULL to indicate that the target wasn't found
    return NULL;
}

int main() {
    int a[] = {5, -1, 3, -10, 0, 12, 4, -2, 2, 15};
    int length = 10;
    int target;

    cout << "Enter a target: ";
    cin >> target;

    int *found = search(a, length, target);
    if (found == NULL) {
        cout << target << " not found!" << endl;
        return 0;
    }

    cout << *found << " found!" << endl;

    return 0;
}

