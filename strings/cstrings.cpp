#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    // this is automatically null terminated,
    // so the array has 6 elements in it
    char cstr[] = "Hello";

    // this is NOT a c-string, just a char array
    char not_cstr[] = {'W','o','r','l','d'};

    // this is a c-string
    char is_cstr[] = {'A','g','a','i','n','\0'};

    cout << cstr << endl;
    cout << not_cstr << endl;
    cout << is_cstr << endl;

    cout << strlen(cstr) << endl;
    cout << strlen(not_cstr) << endl;
    cout << strlen(is_cstr) << endl;
    return 0;
}

