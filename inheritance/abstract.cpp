#include <iostream>
using namespace std;

class A {
protected:
    int i;
public:
    A() {
        cout << "Constructor A()" << endl;
        i = 0;
    }
    
    int get() {
        return i;
    }

    virtual void set() = 0;
};

class B : public A {
public:
    B() : A() {
        cout << "Constructor B()" << endl;
    }

    void set() override {
        cout << "B.set()" << endl;
        i = 1;
    }
};

class C : public B {
public:
    C() : B() {
        cout << "Constructor C()" << endl;
    }

    void set() override {
        cout << "C.set()" << endl;
        i = 2;
    }
};

class D : public C {
public:
    D() : C() {
        cout << "Constructor D()" << endl;
    }
};

ostream& operator<<(ostream& out, A& a) {
    out << a.get();
    return out;
}

int main() {
    // this would be a compiler error
    //A *a = new A();

    cout << "New B(): " << endl;
    B *b = new B();
    b->set();
    cout << "*b: " << *b << endl;

    cout << "New C(): " << endl;
    C *c = new C();
    c->set();
    cout << "*c: " << *c << endl;
    
    cout << "New D(): " << endl;
    D *d = new D();
    d->set();
    cout << "*d: " << *d << endl;
    return 0;
}

