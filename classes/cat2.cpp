#include <iostream>
using namespace std;

class cat {
public:
    string name;
    string color;
    int age;

    void speak(int level) {
        if (level == 1) {
            cout << "meow" << endl;
        } else {
            cout << "MEOW!" << endl;
        }
    }
};

int main() {
    cat c, d;
    c.name = "Jet";
    d.name = "Garfield";

    cout << c.name << " says ";
    c.speak(2);
    cout << d.name << " says ";
    d.speak(1);

    return 0;
}

