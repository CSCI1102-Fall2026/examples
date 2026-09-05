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

bool do_subset_sum(dataset& d, int index, int partial_sum, int target_sum) {
    if (partial_sum == target_sum) {
        return true;
    }
    if (index == d.length()) {
        return false;
    }

    // if the current value would make the partial sum too big, skip it
    if (d[index] + partial_sum > target_sum) {
        return do_subset_sum(d, index+1, partial_sum, target_sum);
    }

    // otherwise try both with and without the curren number
    bool include_index = do_subset_sum(d, index+1, d[index]+partial_sum, target_sum);
    bool exclude_index = do_subset_sum(d, index+1, partial_sum, target_sum);
    return include_index or exclude_index;
}

bool subset_sum(dataset& d, int target) {
    return do_subset_sum(d, 0, 0, target);
}

int main() {
    int n = 8;
    int vals[] = {5, 6, 6, 10, 7, 12, 9, 5};
    dataset d(vals, n);

    cout << subset_sum(d, 0) << endl;
    cout << subset_sum(d, 7) << endl;
    cout << subset_sum(d, 11) << endl;
    cout << subset_sum(d, 60) << endl;

    cout << subset_sum(d, -1) << endl;
    cout << subset_sum(d, 52) << endl;
    cout << subset_sum(d, 61) << endl;
    cout << subset_sum(d, 100) << endl;

    return 0;
}

