#include <iostream>

using namespace std;


int possible(long long* line, long long h, long long dmg, int n) {
    long long total = 0;

    for (int i = 1; i < n ;i++) {
        total += min(line[i] - line[i-1], dmg);
        if (total >= h) {
            return 1;
        }
    }

    total += dmg;

    if (h > total) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long h;

        cin >> n >> h;

        long long line[n];

        for (int i = 0 ; i < n;i++)  {
            cin >> line[i];
        }

        long long mid, low, high;

        low = 1;
        high = h;
        
        long long ans;
        while (low <= high) {
            mid = (high + low) / 2;

            if (possible(line, h, mid, n)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        cout << ans << endl;
    }
}

