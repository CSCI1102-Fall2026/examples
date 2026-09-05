#include <iostream>
using namespace std;

class cat {
public:
    string name;
    string color;
    int age;

    void speak(int level) {
        cout << name << " says ";
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

    c.speak(2);
    d.speak(1);
    return 0;
}

