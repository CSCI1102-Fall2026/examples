#include <iostream>
#include <stdexcept>
using namespace std;

class dataset {
private:
    int *data;
    int capacity;
    int size;

public:
    dataset(int cap) {
        cout << "dataset constructor" << endl;
        capacity = cap;
        size = 0;
        data = new int[capacity];
    }

    ~dataset() {
        cout << "dataset destructor" << endl;
        delete[] data;
    }

    void add_value(int x) {
        if (size == capacity) {
            throw out_of_range("dataset full");
        }
        data[size] = x;
        size++;
    }

    string to_str() {
        string s = "";
        for (int i = 0; i < size; i++) {
            s += to_string(data[i]) + " ";
        }
        return s;
    }
};

int main() {
    dataset ds(5);
    try {
        ds.add_value(42);
        ds.add_value(10);
        ds.add_value(65535);
    } catch(out_of_range& e) {
        cout << e.what() << endl;
        return 0;
    }
    cout << "values: " << ds.to_str() << endl;
    return 0;
}

