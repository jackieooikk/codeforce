#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--) {
        int n, m, k, max;
        cin >> n >> m >> k;

        if (n/k >= m) {
            max = m;
        } else {
            max = n/k - ((m - (n/k) + (k - 1) - 1) / (k - 1));
        }

        cout << max << endl;
    }
}
