#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float total, provided, change;
    cout << "Enter total: $";
    cin >> total;

    cout << "Enter provided: $";
    cin >> provided;

    if (provided < total) {
        cout << "That's not enough!" << endl;
        return 0;
    }

    change = provided - total;
    cout << fixed << setprecision(2);

    cout << "Change: $" << change << endl;

    return 0;
}
