#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char response = 'y';
    float a,b,sum;

    cout << fixed << setprecision(2);

    // should be == here!
    while (response = 'y') {
        cout << "Enter two numbers: ";
        cin >> a >> b;
        
        sum = a + b;
        
        cout << a << "+" << b << "=" << sum << endl;

        cout << "Again? Enter y or n: ";
        cin >> response;
    }

    cout << "Have a nice day!" << endl;
    return 0;
}

