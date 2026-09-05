#include <iostream>
using namespace std;

int main() {
    int nums[5];

    nums[0] = 4;
    nums[1] = 3;
    nums[2] = 2;
    nums[3] = 1;

    nums[4] = 15 - nums[1] * nums[2];

    for (int i = 0; i < 5; i++) {
        cout << nums[i];
        if (i != 4) {
            cout << ",";
        }
    }
    cout << endl;

    return 0;
}

