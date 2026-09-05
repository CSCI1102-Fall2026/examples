#include <iostream>
using namespace std;

class my_string {
private:
    char *str;
    int len;

public:
    my_string(char s[], int n) {
        len = n;
        str = new char[len];
        for (int i = 0; i < len; i++) {
            str[i] = s[i]; 
        }
    }

    ~my_string() {
        delete[] str;
    }

    int length() {
        return len;
    }

    char at(int index) {
        if (index < 0 or index >= len) {
            throw out_of_range("invalid index");
        }
        return str[index];
    }
    
    void set(int index, char c) {
        if (index < 0 or index >= len) {
            throw out_of_range("invalid index");
        }
        str[index] = c;
    }

    void print() {
        for (int i = 0; i < len; i++) {
            cout << str[i];
        }
        cout << endl;
    }
};

int main() {
    char tmp[] = "hello!";
    my_string s(tmp, 6);
    s.print();
    cout << s.at(1) << endl;
    s.set(5, '?');
    s.print();

    // this would throw out_of_range:
    // s.set(6, '!');
    return 0;
}
