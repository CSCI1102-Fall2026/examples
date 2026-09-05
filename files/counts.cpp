#include <iostream>
#include <fstream>
using namespace std;

void counts(ifstream& in, int& lines, int& chars) {
    lines = 0;
    chars = 0;

    string line;
    while (getline(in, line)) {
        lines++;
        chars += line.length() + 1; // add one for the new line
    }
}

int main() {
    string in_filename;
    cout << "Enter the original file name: ";
    cin >> in_filename;

    ifstream fin(in_filename);
    if (!fin.is_open()) {
        cout << "Error! " << in_filename << " couldn't be opened." << endl;
        return 1;
    }

    int num_lines, num_chars;
    counts(fin, num_lines, num_chars);
    cout << "#lines: " << num_lines << endl;
    cout << "#chars: " << num_chars << endl;

    return 0;
}

