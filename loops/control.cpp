#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char response;
    float a,b,result;

    cout << fixed << setprecision(2);

    while (true) {
        cout << "Would you like to do a/b? Enter y or n: ";
        cin >> response;
        if (response != 'y') {
            break;
        }

        cout << "Enter a and b: ";
        cin >> a >> b;

        if (b == 0) {
            cout << "Can't divide by zero!" << endl;
            continue;
        }
        
        result = a / b;
        
        cout << a << "/" << b << "=" << result << endl;
    }

    cout << "Thanks!" << endl;
    return 0;
}

