#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if (n == 1) {
            cout << -1 << endl;
            continue;
        }

        cout << 2;
        for (int i = 1; i < n; i++) {
            cout << 3;
        }
        cout << endl;
    }
}
