#include <iostream>
using namespace std;

/* expected output:
Barb Brown
Carol Chen
Denise Davis
*/
void print_names(string f[], string l[], int start, int stop) {
    for (int i=start, j=start; i <= stop; i++, j++) {
        cout << f[i] << " " << l[j] << endl;
    }
}

int main() {
    string firsts[] = {"Alice","Barb","Carol","Denise"};
    string lasts[] = {"Adams","Brown","Chen","Davis"};
    print_names(firsts, lasts, 1, 3);
    return 0;
}

