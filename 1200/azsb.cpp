#include <iostream>
#include <cmath>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, k;

        cin >> n >> k;

        ll ans = 1;

        ll mod = pow(10,9) + 7;

        for (ll i = 0; i < k; i++) {
            ans = (ans * n) % mod;
        }

        cout << ans << endl;
    }
}
