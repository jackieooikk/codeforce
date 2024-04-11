#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long ans = n;

        for (long long i = 1; i <= k && i * i<= n; i++) {
            if (n % i == 0) {
                if (n / i <= k) {
                    ans = i;
                    break;
                } else {
                    ans = n / i;
                }
                
            }
        }

        cout << ans << endl;
    }
}
