#include <iostream>

using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        long long n, k, kk;
        cin >> n >> k;
        if (k < n) {
            kk = k * (n/k);
            if (kk < n) {
                kk += k;
            }
        } else {
            kk = k;
        }

        long long d;
        d = kk/n;

        if (kk % n != 0) {
            d++;
        }

        cout << d << endl;
    }
}
