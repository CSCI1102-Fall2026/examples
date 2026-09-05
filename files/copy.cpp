#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string in_filename;
    cout << "Enter the original file name: ";
    cin >> in_filename;

    ifstream fin(in_filename);
    if (!fin.is_open()) {
        cout << "Error! " << in_filename << " couldn't be opened." << endl;
        return 1;
    }

    string out_filename;
    cout << "Enter the new file name: ";
    cin >> out_filename;

    ofstream fout(out_filename);
    if (!fout.is_open()) {
        cout << "Error! " << out_filename << " couldn't be opened." << endl;
        return 1;
    }

    string word;
    while (fin >> word) {
        fout << word << endl;
    }

    return 0;
}

