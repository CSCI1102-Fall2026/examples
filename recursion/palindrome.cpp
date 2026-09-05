#include <iostream>
using namespace std;

bool is_palindrome(string w) {
    if (w.length() <= 1) {
        return true;
    }

    int last_index = w.length()-1;
    if (w[0] != w[last_index]) {
        return false;
    }

    return is_palindrome(w.substr(1,last_index-1));
}

int main() {
    cout << is_palindrome("madam") << endl;
    cout << is_palindrome("maam") << endl;
    cout << is_palindrome("sir") << endl;
    cout << is_palindrome("abceba") << endl;
    return 0;
}

