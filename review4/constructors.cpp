#include <iostream>
using namespace std;

class abc {
public:
    abc() {
        cout << "here" << endl;
    }
};

class xyz : public abc {
public:
    xyz() : abc() {
        cout << "there" << endl;
    }
};

class mno : public abc {
public:
    abc a;

    mno() : abc() {
        cout << "where" << endl;
    }
};

class qrs : public xyz {
public:
    qrs() : xyz() {
        cout << "were" << endl;
    }
};

int main() {
    qrs q;
    mno m;
    return 0;
}

