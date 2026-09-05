#include <iostream>
#include "dog.hpp"
using namespace std;

dog::dog(string n, unsigned int i, unsigned int d) {
    name = n;
    id = i;
    hunger_level = 0;
    drool_level = d;
}

string dog::get_name() {
    return name;
}

unsigned int dog::get_id() {
    return id;
}

void dog::play() {
    cout << name << " plays." << endl;
    hunger_level++;
}

void dog::eat() {
    cout << name << " eats." << endl;
    hunger_level = 0;
}

void dog::speak() {
    cout << name << " says ";
    for (unsigned int i = 0; i < hunger_level; i++) {
        cout << "bark";
    }
    cout << ".";
    if (drool_level > 0) {
        cout << "  dr";
        for (unsigned int i = 0; i < drool_level; i++) {
            cout << "oo";
        }
        cout << "l.";
    }
    cout << endl;
}

ostream& operator<<(ostream& out, dog& d) {
    out << d.get_name() << "," << d.get_id();
    return out;
}
