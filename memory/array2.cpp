#include <iostream>
using namespace std;

void f(int nums[], int length) {
    cout << "   f(): &nums    = " << &nums << endl;
    //cout << "   f(): nums     = " << nums << endl;
    cout << "   f(): &nums[0] = " << &nums[0] << endl;
}

int main() {
    int length = 2;
    int vals[length] = {3, 4};
    cout << "main(): &vals    = " << &vals << endl;
    cout << "main(): &vals[0] = " << &vals[0] << endl;

    f(vals, length);
    return 0;
}

