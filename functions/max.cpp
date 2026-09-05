#include <iostream>
#include <string>
using namespace std;

float get_float(string prompt) {
    float f;
    cout << "Enter " << prompt << ": ";
    cin >> f;
    return f;
}

float max(float a, float b) {
    if (a >= b) {
        return a;
    }
    return b;
}

int main() {
    float x, y;
    x = get_float("x");
    y = get_float("y");

    float m = max(x, y);

    cout << "Max=" << m << endl;

    return 0;
}

