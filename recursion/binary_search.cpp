#include <iostream>
using namespace std;

// recursive function
bool do_binary_search(int a[], int t, int low, int high) {
    if (low > high) {
        // base case with no values left to look at
        return false;
    }
    int mid = (low + high) / 2;

    if (a[mid] == t) {
        // base case where we find the target
        return true;
    }

    // recursive step, call on one half of indices
    if (a[mid] > t) {
        // middle is larger, so search between low and mid indices
        return do_binary_search(a, t, low, mid-1);
    } else {
        // middle is smaller, so search between mid and high indices
        return do_binary_search(a, t, mid+1, high);
    }
}

// helper function to set up the recursion
bool binary_search(int a[], int n, int t) {
    return do_binary_search(a, t, 0, n-1);
}

int main() {
    int n = 20;
    int a[] = {4, 10, 11, 24, 26, 27, 32, 33, 61, 63,
              64, 72, 74, 75, 79, 86, 92, 93, 98, 100};

    int target;
    cout << "Enter target: ";
    cin >> target;

    if (binary_search(a, n, target)) {
        cout << target << " found." << endl;
    } else {
        cout << target << " not found." << endl;
    }
    
    return 0;
}

