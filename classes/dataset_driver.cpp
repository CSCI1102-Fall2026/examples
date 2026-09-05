#include <iostream>
#include <stdexcept>
#include "dataset.hpp"
using namespace std;

int main() {
    dataset ds(5);
    try {
        ds.add_value(42);
        ds.add_value(10);
        ds.add_value(65535);
        ds[1] = 128;
    } catch(out_of_range& e) {
        cout << e.what() << endl;
        return 0;
    }
    cout << "values: " << ds << endl;
    return 0;
}

