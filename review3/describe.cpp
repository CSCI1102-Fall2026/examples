#include <iostream>
using namespace std;

string *mystery(string strs[], int size, size_t min, int& new_size) {
    new_size = 0;
    for (int i = 0; i < size; i++) {
        if (strs[i].length() >= min) {
            new_size++;
        }
    }

    string *res = new string[new_size];
    for (int i = 0, res_i = 0; i < size; i++) {
        if (strs[i].length() >= min) {
            res[res_i] = strs[i];
            res_i++;
        }
    }

    return res;
}

void print_array(string ss[], int size) {
    for (int i = 0; i < size; i++) {
        cout << ss[i] << " ";
    }
    cout << endl;
}

int main() {
    string words[] = {"alice","bob","carol","dave","eve"};
    int size = 5;
    int new_size;

    string *filtered = mystery(words, size, 4, new_size);
    print_array(filtered, new_size);
    delete[] filtered;

    filtered = mystery(words, size, 3, new_size);
    print_array(filtered, new_size);
    delete[] filtered;

    filtered = mystery(words, size, 6, new_size);
    print_array(filtered, new_size);
    delete[] filtered;

    return 0;
}

