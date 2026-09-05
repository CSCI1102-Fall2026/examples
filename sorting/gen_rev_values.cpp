#include <iostream>
#include <fstream>
using namespace std;

void make_rev_file(string fname, int n) {
    ofstream fout(fname);
    if (!fout.is_open()) {
        cout << "error with " << fname << endl;
        exit(1);
    }

    for (int i = n; i >= 1; i--) {
        fout << i << endl;
    }
}

int main() {
    make_rev_file("rev10k", 10000);
    make_rev_file("rev20k", 20000);
    make_rev_file("rev30k", 30000);
    make_rev_file("rev40k", 40000);
    make_rev_file("rev50k", 50000);

    return 0;
}

