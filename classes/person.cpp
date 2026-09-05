#include <iostream>
using namespace std;

class person {
private:
    string name;  // full name
    float height; // inches

public:
    // height provided in inches
    person(string n, float h) {
        name = n;
        height = h;
    }

    // growth in inches
    void grow(float growth) {
        height += growth;
    }

    // return height in inches
    float get_height() {
        return height;
    }

    string to_str() {
        string out = name + ": ";
        out += to_string(height) + "in"; 
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

