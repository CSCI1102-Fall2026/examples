#include <iostream>
#include "cat.hpp"
using namespace std;

cat::cat(string n, unsigned int i, bool h) {
    name = n;
    id = i;
    hunger_level = 0;
    has_hairballs = h;
}

string cat::get_name() {
    return name;
}

unsigned int cat::get_id() {
    return id;
}

void cat::play() {
    cout << name << " plays." << endl;
    hunger_level++;
}

void cat::eat() {
    cout << name << " eats." << endl;
    hunger_level = 0;
}

void cat::speak() {
    cout << name << " says ";
    for (unsigned int i = 0; i < hunger_level; i++) {
        cout << "meow";
    }
    cout << ".";
    if (has_hairballs) {
        cout << " *throat clearing*";
    }
    cout << endl;
}

ostream& operator<<(ostream& out, cat& c) {
    out << c.get_name() << "," << c.get_id();
    return out;
}
