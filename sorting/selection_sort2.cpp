#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void swap(int& x, int& y) {
    int tmp = x;
    x = y;
    y = tmp;
}

void selection_sort(int a[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_index = i;
        for (int j = i+1; j < n; j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }

        if (min_index != i) {
            swap(a[i], a[min_index]);
        }
    }
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

void time_selection_sort(string fname, int n) {
    int *a = get_values(fname, n);

    time_point start = steady_clock::now();
    selection_sort(a, n);
    time_point stop = steady_clock::now();

    duration diff = duration_cast<milliseconds>(stop - start);

    cout << n << ": " << diff.count() << endl;

    delete a;
}

int main() {
    time_selection_sort("rev10k", 10000);
    time_selection_sort("rev20k", 20000);
    time_selection_sort("rev30k", 30000);
    time_selection_sort("rev40k", 40000);
    time_selection_sort("rev50k", 50000);
    return 0;
}

