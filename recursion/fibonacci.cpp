#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n-2) + fibonacci(n-1);
    }
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

