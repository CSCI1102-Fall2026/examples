#include <iostream>
using namespace std;

class stuff {
public:
    string s;
    int i;

    stuff() {
        s = "default";
        i = 2;
    }
    stuff(string sa, int ia) {
        s = sa;
        i = ia;
    }
    ~stuff() {
        for (int j = 1; j <= i; j++) {
            cout << s << endl;
        }
    }
};

ostream& operator<<(ostream& out, stuff& s) {
    for (int i = 0; i < s.i; i++) {
        out << s.s[i];
    }
    return out;
}

int main() {
    stuff obj;
    stuff *obj2 = new stuff("cs2",1);

    cout << obj << endl;
    cout << *obj2 << endl;
    delete obj2;

    return 0;
}

