#include <iostream>
using namespace std;

int main() {
    int prev, next;
    int diff = 0;
    
    cin >> prev;
    cin >> next;
    diff = next - prev;
    prev = next;

    while (true) {
        cin >> next;
        if (next == -1) {
            break;
        }
        if (next > prev && next-prev == diff) {
            prev = next;
            continue;
        }
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    return 0;
}
