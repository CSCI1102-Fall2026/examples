#include <iostream>
using namespace std;

unsigned int mystery(string *a, int asize, string *b, int bsize) {
    unsigned int x = 0;
    for (int i = 0; i < asize; i++) {
        for (int j = 0; j < bsize; j++) {
            if (a[i] == b[j]) {
                x++;
                break;
            }
        }
    }
    return x;
}

int main() {
    string words1[] = {"alice","bob","carol","dave","eve"};
    int size1 = 5;
    string words2[] = {"fran", "dave", "george", "eve"};
    int size2 = 4;

    cout << mystery(words1, size1, words2, size2) << endl;

    return 0;
}

