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
        capacity = cap;
        size = 0;
        data = new int[capacity];
    }

    ~dataset() {
        delete[] data;
    }

    void add_value(int x) {
        if (size == capacity) {
            throw out_of_range("dataset full");
        }
        data[size] = x;
        size++;
    }

    int& operator[](int index) {
        if (index < 0 or index >= size) {
            throw out_of_range("invalid index");
        }
        return data[index];
    }

    int get_size() {
        return size;
    }
};

ostream& operator<<(ostream& out, dataset& d) {
    for (int i = 0; i < d.get_size(); i++) {
        out << d[i] << " ";
    }
    return out;
}

int main() {
    dataset ds(5);
    try {
        ds.add_value(42);
        ds.add_value(10);
        ds.add_value(65535);
        ds[1] = 128;
    } catch(out_of_range& e) {
        cout << e.what() << endl;
        return 0;
    }
    cout << "values: " << ds << endl;
    return 0;
}

