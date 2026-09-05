#include <iostream>
#include <stdexcept>
#include "dataset.hpp"
using namespace std;

dataset::dataset(int cap) {
    capacity = cap;
    size = 0;
    data = new int[capacity];
}

dataset::~dataset() {
    delete[] data;
}

void dataset::add_value(int x) {
    if (size == capacity) {
        throw out_of_range("dataset full");
    }
    data[size] = x;
    size++;
}

int& dataset::operator[](int index) {
    if (index < 0 or index >= size) {
        throw out_of_range("invalid index");
    }
    return data[index];
}

int dataset::get_size() {
    return size;
}

ostream& operator<<(ostream &out, dataset& d) {
    for (int i = 0; i < d.get_size(); i++) {
        out << d[i] << " ";
    }
    return out;
}
