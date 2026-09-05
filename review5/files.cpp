#include <iostream>
#include <fstream>
using namespace std;

void handle_files(ifstream& a, ifstream& b) {
    string input;
    while (a >> input) {
        string tmp;
        b >> tmp;
        cout << tmp << input << endl;
    }
}

int main() {
    ifstream f1("f1");
    if (!f1.is_open()) {
        cout << "Error! f1 couldn't be opened." << endl;
        return 1;
    }
    
    ifstream f2("f2");
    if (!f2.is_open()) {
        cout << "Error! f2 couldn't be opened." << endl;
        return 1;
    }

    handle_files(f1, f2);

    return 0;
}

