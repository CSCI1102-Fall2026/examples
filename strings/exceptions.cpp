#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter numbers, or done to stop:" << endl;

    float sum = 0;
    while (true) {
        cin >> input;
        if (input == "done") {
            break;
        }

        float num;
        try {
            num = stof(input);
        } catch (invalid_argument& e) {
            continue;
        }
        sum += num;
    }

    cout << "sum=" << sum << endl;
    return 0;
}

