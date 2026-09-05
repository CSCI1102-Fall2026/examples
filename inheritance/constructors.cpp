#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor A()" << endl;
    }
};

class B : public A {
public:
    B(int i) : A() {
        cout << "Constructor B(" << i << ")" << endl;
    }
};

class C : public B {
public:
    C(int i) : B(i) {
        cout << "Constructor C(" << i << ")" << endl;
    }
};

int main() {
    cout << "Declare a:" << endl;
    A a;

    cout << "Declare b(1):" << endl;
    B b(1);

    cout << "Declare c(2):" << endl;
    C c(2);

    cout << "New A(): " << endl;
    A *a2 = new A();

    cout << "New B(3): " << endl;
    B *b2 = new B(3);

    cout << "New C(4): " << endl;
    C *c2 = new C(4);
    
    return 0;
}

