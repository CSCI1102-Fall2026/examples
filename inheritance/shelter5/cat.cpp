#include <iostream>
#include "pet.hpp"
#include "cat.hpp"
using namespace std;

cat::cat(string n, unsigned int i, bool h) : pet(n, i) {
    has_hairballs = h;
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
