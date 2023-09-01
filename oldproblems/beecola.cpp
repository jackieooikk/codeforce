#include <iostream>

using namespace std;

long binarySearch(long* sorted_prices, long n, long long coins) {
    long left = 0;
    long right = n - 1;

    while (left <= right) {
        long middle = left + (right - left) / 2;

        if (sorted_prices[middle] <= coins) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return right;
}



int main() {
    long n;
    cin >> n;

    long x[n];

    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    sort(x, x + n);

    long q;
    cin >> q;

    while (q--) {
        long long coins;
        cin >> coins;
        long location = binarySearch(x, n, coins);
        cout << location + 1 << endl;
    }
}
