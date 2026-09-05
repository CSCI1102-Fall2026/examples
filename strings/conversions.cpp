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

        float num = stof(input);
        sum += num;
    }

    cout << "sum=" << sum << endl;

    // this doesn't control precision the same way, so
    // we wouldn't normally do it like this
    string s_sum = to_string(sum);
    cout << "s_sum=" << s_sum << endl;

    return 0;
}

