#include <iostream>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        string s;
        cin >> s;

        ll total = 0;
        ll line[n];
        for (ll i = 0; i < n; i++) {
            if (s[i] == 'R') {
                line[i] = n - i - 1;
            } else {
                line[i] = i;
            }
            total += line[i];
        }

        sort(line, line + n);
        for (ll i = 0; i < n; i++) {
            ll old = line[i];

            if (line[i] < n/2) {
                line[i] = n - 1 - line[i];
            }

            total += line[i] - old;
            cout << total << " ";
        }

        cout << endl;
    }
}
        



