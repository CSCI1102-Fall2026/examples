#include <fstream>
using namespace std;

int main() {
    ofstream fout("output_test");
    for (int i = 0; i < 10; i++) {
        fout << i << endl;
    }
    return 0;
}

