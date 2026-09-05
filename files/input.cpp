#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename;
    cout << "Enter the file name to read from: ";
    cin >> filename;

    ifstream fin(filename);
    if (!fin.is_open()) {
        cout << "Error! " << filename << " couldn't be opened." << endl;
        return 1;
    }

    int val;
    while (fin >> val) {
        cout << val << endl;
    }
    return 0;
}

