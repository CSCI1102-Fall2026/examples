#include <iostream>
#include <cstdlib>
#include "pet.hpp"
#include "cat.hpp"
#include "dog.hpp"
using namespace std;

int main() {
    srand(time(NULL));

    int num_pets = 4;
    pet *pets[num_pets];
    pets[0] = new cat("fluffy", 1, false);
    pets[1] = new cat("mr. snuggles", 2, true);
    pets[2] = new dog("rex", 3, 0);
    pets[3] = new dog("fido", 4, 3);

    for (int i = 0; i < num_pets; i++) {
        cout << *pets[i] << endl;
        int play_count = rand()%4 + 1;
        for (int j = 1; j <= play_count; j++) {
            pets[i]->play();
        }
        pets[i]->speak();
        pets[i]->eat();
        cout << endl;
    }

    return 0;
}

