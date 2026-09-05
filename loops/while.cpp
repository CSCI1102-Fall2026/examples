#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter positive n: ";
    cin >> n;

    if (n <= 0) {
        cout << "That's not positive!" << endl;
        return 0;
    }

    int sum = 0;

    int i = 1;
    cout << "About to check if " << i << "<=" << n << endl;
    while (i <= n) {
        cout << "Start loop body" << endl;
        sum += i; // same as sum = sum + i
        i++; // same as i = i + 1, or i += 1
        cout << "End loop body" << endl;
        cout << "About to check if " << i << "<=" << n << endl;
    }
    cout << "Loop done." << endl;

    cout << "Sum=" << sum << endl;

    return 0;
}

