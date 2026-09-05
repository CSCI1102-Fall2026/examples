#include <iostream>
#include <string>
using namespace std;

// expected output:
// 3

int count_letter(string s, char c) {
    if (s.length() == 0) {
        return 0;
    }
    int count = 0;
    if (s[0] == c) {
        count = 1;
    }
    return count + count_letter(s.substr(1), c);
}

int main() {
    int count = count_letter("The Joy of Programming", 'o');
    cout << count << endl;
    return 0;
}

