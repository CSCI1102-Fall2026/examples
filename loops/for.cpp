#include <iostream>
using namespace std;

int main() {
    int n, sum;
    cout << "Enter positive n: ";
    cin >> n;

    if (n <= 0) {
        cout << "That's not positive!" << endl;
        return 0;
    }

    sum = 0;
    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    cout << "Sum=" << sum << endl;

    sum = 0;
    for (int j = 1; j <= n; j++) {
        sum += j;
    }
    cout << "Sum=" << sum << endl;

    return 0;
}

