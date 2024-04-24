#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
using namespace std;




int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, l, r;

        cin >> n >> l >> r;

        vector <int> line(n);

        for (int i = 0; i < n; i++) {
            cin >> line[i];
        }

        sort(line.begin(), line.end());

        ll total = 0;

        for (int i = 0; i < n; i++ ) {
            auto lower = lower_bound(line.begin() + i + 1, line.end(), l - line[i]);
            auto upper = upper_bound(line.begin() + i + 1, line.end(), r - line[i]);
            total += upper - lower;
        }
        cout << total << endl;
    }

}
