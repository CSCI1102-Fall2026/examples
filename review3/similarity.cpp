#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

float similarity(char a[], char b[]) {
    float score = 0;
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        score += abs(a[i] - b[i]) / 25.0; 
        i++;
    }
    int len_diff = strlen(a) - strlen(b);
    score += abs(len_diff);
    return score;
}

int main() {
    char s1[] = "abcde";
    char s2[] = "abhd";
    cout << similarity(s1, s2) << endl;

    char s3[] = "computer";
    char s4[] = "computer";
    cout << similarity(s3, s4) << endl;

    return 0;
}
