#include <iostream>
using namespace std;

int main() {

    int sum = 0;
    int place = 1;
    int i;
    for (i = 1; sum < 10000; place *= 10) {
        sum += i * place;
        cout << sum << endl;
        i++;
    }
    cout << endl;

    // this is the same:
    sum = 0;
    place = 1;
    i = 1;
    for (; sum < 10000;) {
        sum += i * place;
        cout << sum << endl;
        i++;
        place *= 10;
    }
    cout << endl;

    // so is this:
    for (sum = 0, place = 1, i = 1; sum < 10000; i++, place *= 10) {
        sum += i * place;
        cout << sum << endl;
    }
    cout << endl;

    return 0;
}

