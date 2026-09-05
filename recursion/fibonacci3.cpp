#include <iostream>
using namespace std;

// recursive function
long do_fibonacci(long n, long f[]) {
    // base case
    if (f[n] != -1) {
        return f[n];
    }

    // recursive step
    f[n] = do_fibonacci(n-2, f) + do_fibonacci(n-1, f);
    return f[n];
}

// helper function to set up the recursion
long fibonacci(long n) {
    long *f = new long[n+1];
    f[0] = 0;
    f[1] = 1;
    for (long i = 2; i <= n; i++) {
        f[i] = -1;
    }

    long result = do_fibonacci(n, f);

    delete[] f;
    return result;
}

int main() {
    long n;
    cout << "Enter n: ";
    cin >> n;
    if (n < 0) {
        cout << "n must be at least zero." << endl;
        return 1;
    }

    cout << fibonacci(n) << endl;
    return 0;
}

