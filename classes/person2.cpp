#include <iostream>
using namespace std;

class person {
private:
    string name;  // full name
    float height; // centimeters

    float in2cm(float in) {
        return in*2.54;
    }

    float cm2in(float cm) {
        return cm/2.54;
    }


public:
    // height provided in inches
    person(string n, float h) {
        name = n;
        height = in2cm(h);
    }

    // growth in inches
    void grow(float growth) {
        height += in2cm(growth);
    }

    // return height in inches
    float get_height() {
        return cm2in(height);
    }

    string to_str() {
        string out = name + ": ";
        out += to_string(cm2in(height)) + "in"; 
        return out;
    }
};

int main() {
    person p("Alice Adams", 66.5);
    p.grow(2);
    cout << p.get_height() << endl;
    cout << p.to_str() << endl;
    return 0;
}

