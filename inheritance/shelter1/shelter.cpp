#include <iostream>
#include <cstdlib>
#include "cat.hpp"
#include "dog.hpp"
using namespace std;

int main() {
    srand(time(NULL));

    int num_cats = 2;
    cat *cats[num_cats];
    cats[0] = new cat("fluffy", 1, false);
    cats[1] = new cat("mr. snuggles", 2, true);

    int num_dogs = 2;
    dog *dogs[num_dogs];
    dogs[0] = new dog("rex", 3, 0);
    dogs[1] = new dog("fido", 4, 3);

    for (int i = 0; i < num_cats; i++) {
        cout << *cats[i] << endl;
        int play_count = rand()%4 + 1;
        for (int j = 1; j <= play_count; j++) {
            cats[i]->play();
        }
        cats[i]->speak();
        cats[i]->eat();
        cout << endl;
    }

    for (int i = 0; i < num_dogs; i++) {
        cout << *dogs[i] << endl;
        int play_count = rand()%4 + 1;
        for (int j = 1; j <= play_count; j++) {
            dogs[i]->play();
        }
        dogs[i]->speak();
        dogs[i]->eat();
        cout << endl;
    }

    return 0;
}

