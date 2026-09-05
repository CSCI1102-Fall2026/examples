#include <iostream>
using namespace std;

int main() {
    int i = 42;
    cout << "After i=42, i=" << i << endl;

    int j;
    j = 16;

    int *p;
    p = &i;

    *p = 5;
    cout << "After *p=5, i=" << i << endl;

    int *q;
    q = p;
    *q = 1;
    cout << "After *q=1, i=" << i << endl;

    cout << "&i=" << &i << endl;
    cout << " i=" << i << endl;

    cout << "&j=" << &j << endl;
    cout << " j=" << j << endl;

    cout << "&p=" << &p << endl;
    cout << " p=" << p << endl;
    cout << "*p=" << *p << endl;

    cout << "&q=" << &q << endl;
    cout << " q=" << q << endl;
    cout << "*q=" << *q << endl;
    
    p = NULL;
    cout << "Set p to NULL, about to do *p..." << endl;
    cout << *p << endl;

    return 0;
}

