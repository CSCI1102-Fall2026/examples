#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
using namespace std::chrono;

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

int *get_values(string fname, int n) {
   int *a = new int[n];
   ifstream fin(fname);
   if (!fin.is_open()) {
       cout << "error with " << fname << endl;
       exit(1);
   }

   for (int i = 0; i < n; i++) {
       fin >> a[i];
   }

   return a;
}

void time_merge_sort(string fname, int n) {
    int *a = get_values(fname, n);
    dataset d(a,n);

    time_point start = steady_clock::now();
    merge_sort(d);
    time_point stop = steady_clock::now();

    duration diff = duration_cast<milliseconds>(stop - start);

    cout << n << ": " << diff.count() << endl;

    delete a;
}

int main() {
    time_merge_sort("rev10k", 10000);
    time_merge_sort("rev20k", 20000);
    time_merge_sort("rev30k", 30000);
    time_merge_sort("rev40k", 40000);
    time_merge_sort("rev50k", 50000);

    return 0;
}

