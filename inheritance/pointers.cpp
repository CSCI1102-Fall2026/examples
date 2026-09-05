#include <iostream>
using namespace std;

class thing {
private:
    int stuff;

public:
    thing(int s) {
        stuff = s;
    }

    void set_stuff(int s) {
        stuff = s;
    }

    int get_stuff() {
        return stuff;
    }
};

int main() {
    // t1 is a thing object
    thing t1(5);

    // t2 is a pointer to a thing object
    thing *t2; // t2 doesn't point anywhere yet

    t2 = &t1; // make t2 point to t1

    // t3 is a pointer to a (dynamic) thing object
    thing *t3 = new thing(42);

    // this really changes t1
    t2->set_stuff(41);

    cout << "t1: " << t1.get_stuff() << endl;
    cout << "t2: " << t2->get_stuff() << endl;
    cout << "t3: " << t3->get_stuff() << endl;

    string *s = new string("hello");
    cout << (*s).length() << endl;
    cout << s->length() << endl;
    return 0;
}

