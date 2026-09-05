#include <iostream>
using namespace std;

class rectangle {
private:
    float length;
    float width;

public:
    rectangle(float l, float w) {
        length = l;
        width = w;
    }

    string to_str() {
        string s = "Rectangle (" + to_string(length);
        s += "," + to_string(width) + ")";
        s += " has area=" + to_string(area());
        return s;
    }

    float area() {
        return length * width;
    }
};

int main() {
    rectangle r(4.5, 3);
    cout << r.to_str() << endl;
    return 0;
}

