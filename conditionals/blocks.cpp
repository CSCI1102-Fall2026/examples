#include <iostream>
using namespace std;

int main() {
    float input;
    cout << "Enter a positive number: ";
    cin >> input;
    
    if (input <= 0) {
        cout << "That's not positive!" << endl;
        return 0;
    }

    if (input <= 10) {
        cout << "here" << endl;
    } else if (input <= 20) {
        cout << "there" << endl;
    } else if (input <= 30) {
        cout << "elsewhere" << endl;
    }

    if (input <= 10) {
        cout << "here" << endl;
    }
    if (input <= 20) {
        cout << "there" << endl;
    } 
    if (input <= 30) {
        cout << "elsewhere" << endl;
    }

    return 0;
}


