#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename;
    cout << "Enter the file name to write to: ";
    cin >> filename;

    ofstream fout(filename);
    if (!fout.is_open()) {
        cout << "Error! " << filename << " couldn't be opened." << endl;
        return 1;
    }

    fout << "TESTING, TESTING!" << endl;

    return 0;
}

