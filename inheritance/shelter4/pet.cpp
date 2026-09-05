#include <iostream>
#include "pet.hpp"
using namespace std;

pet::pet(string n, unsigned int i) {
    name = n;
    id = i;
    hunger_level = 0;
}

string pet::get_name() {
    return name;
}

unsigned int pet::get_id() {
    return id;
}

void pet::play() {
    cout << name << " plays." << endl;
    hunger_level++;
}

void pet::eat() {
    cout << name << " eats." << endl;
    hunger_level = 0;
}

void pet::speak() {
    cout << name << " makes noise." << endl;
}

ostream& operator<<(ostream& out, pet& p) {
    out << p.get_name() << "," << p.get_id();
    return out;
}
