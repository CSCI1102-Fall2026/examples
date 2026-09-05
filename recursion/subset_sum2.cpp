#include <iostream>
using namespace std;

class dataset {
private:
    int *a;
    int cap;
    int len;
    
public:
    dataset(int n) {
        a = new int[n];
        cap = n;
        len = 0;
    }
    dataset(int *vals, int n) {
        a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = vals[i];
        }
        cap = n;
        len = n;
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

    void append(int val) {
        if (cap == len) {
            throw out_of_range("dataset full");
        }
        a[len] = val;
        len++;
    }
    
    void unappend() {
        len--;
    }

    int sum() {
        int s = 0;
        for (int i = 0; i < len; i++) {
            s += a[i];
        }
        return s;
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

void do_subset_sum(dataset& d, int index, dataset& partial, int target_sum) {
    if (partial.sum() == target_sum) {
        cout << partial << endl;
        return;
    }
    if (index == d.length()) {
        return;
    }

    // try without adding the current number to the partial sum
    do_subset_sum(d, index+1, partial, target_sum);
         
    if (d[index] + partial.sum() <= target_sum) {
        // next try adding the current number to the partial sum
        partial.append(d[index]);

        do_subset_sum(d, index+1, partial, target_sum);

        // remove the current number after we try it
        partial.unappend();
    }
}

void subset_sum(dataset& d, int target) {
    dataset partial(d.length());
    do_subset_sum(d, 0, partial, target);
}

int main() {
    int n = 8;
    int vals[] = {5, 6, 6, 10, 7, 12, 9, 5};
    dataset d(vals, n);

    cout << "target: 11" << endl;
    subset_sum(d, 11);
    cout << endl;

    cout << "target: 31" << endl;
    subset_sum(d, 31);
    cout << endl;

    cout << "target: 100" << endl;
    subset_sum(d, 100);
    cout << endl;
    return 0;
}

