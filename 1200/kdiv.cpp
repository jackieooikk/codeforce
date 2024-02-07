#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;

        cin >> n >> k;

        long long ans = k;

        long long add = k/n;
        long long added = add;

        while (add > 0) {
            ans += add;

            add = (ans - added * n)/n;
            added = added + add;
        }

        cout << ans << endl;
    }
}
