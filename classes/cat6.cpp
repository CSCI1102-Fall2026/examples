#include <iostream>
using namespace std;

class cat {
private:
    string name;
    string color;
    int age;

public:
    cat(string n, string c, int a) {
        name = n;
        color = c;
        age = a;
    }

    string to_str() {
        string out = name + " is ";
        out += color + " and ";
        out += to_string(age) +  " years old.";
        return out;
    }

    void speak(int level) {
        cout << name << " says ";
        if (level == 1) {
            cout << "meow." << endl;
        } else {
            cout << "MEOW!" << endl;
        }
    }
};

int main() {
    cat c("Jet", "black", 2);
    // this would be an error now:
    // c.age = 3;
    c.speak(1);
    cout << c.to_str() << endl;
    return 0;
}

