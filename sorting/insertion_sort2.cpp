#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void insertion_sort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int current = a[i];

        int j = i-1;
        while (j >= 0 and a[j] > current) {
            a[j+1] = a[j];
            j--;
        }
        
        a[j+1] = current;
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

void time_insertion_sort(string fname, int n) {
    int *a = get_values(fname, n);

    time_point start = steady_clock::now();
    insertion_sort(a, n);
    time_point stop = steady_clock::now();

    duration diff = duration_cast<milliseconds>(stop - start);

    cout << n << ": " << diff.count() << endl;

    delete a;
}

int main() {
    time_insertion_sort("rev10k", 10000);
    time_insertion_sort("rev20k", 20000);
    time_insertion_sort("rev30k", 30000);
    time_insertion_sort("rev40k", 40000);
    time_insertion_sort("rev50k", 50000);
    return 0;
}

