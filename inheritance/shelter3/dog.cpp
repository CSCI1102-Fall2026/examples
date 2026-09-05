#include <iostream>
#include "pet.hpp"
#include "dog.hpp"
using namespace std;

dog::dog(string n, unsigned int i, unsigned int d) : pet(n, i) {
    drool_level = d;
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
