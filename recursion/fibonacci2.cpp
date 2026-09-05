#include <iostream>
using namespace std;

// recursive function
int do_fibonacci(int n, int f[]) {
    // base case
    if (f[n] != -1) {
        return f[n];
    }

    // recursive step
    f[n] = do_fibonacci(n-2, f) + do_fibonacci(n-1, f);
    return f[n];
}

// helper function to set up the recursion
int fibonacci(int n) {
    int *f = new int[n+1];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++) {
        f[i] = -1;
    }

    int result = do_fibonacci(n, f);

    delete[] f;
    return result;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    if (n < 0) {
        cout << "n must be at least zero." << endl;
        return 1;
    }

    cout << fibonacci(n) << endl;
    return 0;
}

