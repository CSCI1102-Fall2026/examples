#include <iostream>
using namespace std;

class person {
protected:
    string name;

public:
    person(string n) {
        name = n;
    }

    string get_name() {
        return name;
    }
};

class employee : public person {
protected:
    string title;

public:
    employee(string n, string t) : person(n) {
        title = t;
    }

    string get_title() {
        return title;
    }
};

int main() {
    employee *rando = new employee("Rando", "CEO");
    cout << rando->get_name() << " is the " << rando->get_title() << endl;
    return 0;
}

