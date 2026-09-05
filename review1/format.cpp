#include <iostream>
#include <iomanip>
using namespace std;

/* expected output
1.000
0.500
0.250
0.125
0.062
*/

int main() {
    float x = 1;
    int i = 1;
    cout << fixed << setprecision(3);
    while (i <= 5) {
        cout << x << endl;
        x /= 2;
        i++;
    }

    return 0;
}
