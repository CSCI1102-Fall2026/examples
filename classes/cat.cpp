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
    cat c;
    c.name = "Jet";
    c.color = "black";
    c.age = 2;

    cout << c.name << " says ";
    c.speak(2);
    return 0;
}

