#include <iostream>
#include <string>
using namespace std;

int convert(string s) {
    try {
        return stoi(s);
    } catch (invalid_argument& e) {
        cout << "Error: " << s << endl;
        return -1;
    }
}

int main() {
    int size = 5;
    string words[] = {"3","4","2","zero","1"};
    int nums[size];

    int j = 0;
    for (int i = 0; i < size; i++) {
        int r = convert(words[i]);
        if (r != -1) {
            nums[j] = r;
            j++;
        }
    }

    for (int i = 0; i < j; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}

