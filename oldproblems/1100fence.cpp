#include <iostream>
using namespace std;


int main() {
    long n, k;
    cin >> n >> k;

    int fences[n];

    for (int i = 0; i < n; i++) {
        cin >> fences[i];
    }

    long min, current;
    current = 0;
    for (int i = 0; i < k; i++) {
        current += fences[i];
    }
    long min_indx;
    min = current;
    min_indx = 0;

    for (int i = k; i < n; i++) {
        current -= fences[i - k];
        current += fences[i];

        if (current < min) {
            min = current;
            min_indx = i - k + 1;
        }
    }

    cout << min_indx + 1 << endl;
}
