#include <iostream>
using namespace std;

class rectangle {
public:
    float length;
    float width;

    float area() {
        return length * width;
    }
};

int main() {
    rectangle r;
    r.length = 4.5;
    r.width = 3;

    cout << r.area() << endl;
    return 0;
}

