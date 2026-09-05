#include <iostream>
#include <string>
using namespace std;

class grandparent {
protected:
    string name;
public:
    grandparent(string n) {
        name = n;
    }

    virtual string act(int count) = 0;
};

class parent : public grandparent {
protected:
    string name2;
public:
    parent(string n) : grandparent(n) {
        name2 = n.at(n.length()-1);
    }

    string act(int count) override {
        string s = to_string(count);
        s += name2 + name;
        return s;
    }
};

class child : public parent {
public:
    child(string n) : parent(n) {
    }

    string act(int count) override {
        string s = to_string(count);
        if (count > 1) {
            s += name;
        }
        return s;
    }
};

int main() {
    int n = 3;
    grandparent *a[n];
    a[0] = new child("foo");
    a[1] = new parent("bar");
    a[2] = new child("baz");

    for (int i = 0; i < n; i++) {
        cout << a[i]->act(i+1) << endl;
    }
    return 0;
}

