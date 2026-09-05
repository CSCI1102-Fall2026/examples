#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int miles, feet;
    int total_feet;
    int feet_per_mile = 5280;

    cout << "Enter the total number of feet: ";
    cin >> total_feet;

    miles = total_feet / feet_per_mile;
    feet = total_feet % feet_per_mile;

    cout << "That's " << miles << " miles";
    cout << " and " << feet << " feet." << endl;

    float fmiles = (1.0*total_feet) / feet_per_mile;
    float area = pow(fmiles, 2);
    int acres_per_sqmile = 640;
    cout << endl << "A square of " << fmiles << " miles per side";
    cout << " is " << area*acres_per_sqmile << " acres." << endl;

    return 0;
}
