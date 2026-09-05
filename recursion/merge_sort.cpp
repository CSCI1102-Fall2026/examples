#include <iostream>
using namespace std;

class dataset {
private:
    int *a;
    int len;

public:
    dataset(int *vals, int n) {
        a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = vals[i];
        }
        len = n;
    }

    dataset(dataset& orig, int start, int stop) {
        len = stop - start + 1;
        a = new int[len];
        for (int i = 0; i < len; i++) {
            a[i] = orig[start];
            start++;
        }
    }

    ~dataset() {
        delete[] a;
    }

    int& operator[](int index) {
        if (index < 0 or index >= len) {
            throw out_of_range("invalid index");
        }
        return a[index];
    }

    int length() {
        return len;
    }
};

ostream& operator<<(ostream& out, dataset& d) {
    for (int i = 0; i < d.length(); i++) {
        cout << d[i];
        if (i != d.length()-1) {
            cout << ",";
        }
    }
    return out;
}

void merge(dataset& full, dataset& left, dataset& right) {
    int left_i = 0;
    int right_i = 0;
    for (int i = 0; i < full.length(); i++) {
        // if we've taken all the left values, then take the next right value
        if (left_i == left.length()) {
            full[i] = right[right_i];
            right_i++;
        }

        // if we've taken all the right values, then take the next left value
        else if (right_i == right.length()) {
            full[i] = left[left_i];
            left_i++;
        }

        // if both sides have values, and the next value from the left set is smaller, take it
        else if (left[left_i] < right[right_i]) {
            full[i] = left[left_i];
            left_i++;
        }

        // otherwise take the value from the right set
        else {
            full[i] = right[right_i];
            right_i++;
        }
    }
}

void merge_sort(dataset& d) {
    // a set with 0 or 1 elements is trivially sorted
    if (d.length() <= 1) {
        return;
    }

    // create two new datasets
    int mid = d.length() / 2;

    // the left values from index 0 to mid-1
    dataset left(d, 0, mid-1);

    // the right values from index mid to len-1
    dataset right(d, mid, d.length()-1);

    // recursively sort the left half, then the right half
    merge_sort(left);
    merge_sort(right);

    // now merge the left and right halves back into the original dataset
    merge(d, left, right);
}

int main() {
    int n = 8;
    int a[] = {16, 3, 20, 11, 5, 9, 17, 6};
    dataset d(a, n);
    
    merge_sort(d);
    cout << d << endl;

    return 0;
}

