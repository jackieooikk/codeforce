#include <iostream>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long ans = 0;
        map<int, long long> mp;
        int x;

        for (int i = 0; i < n; i++) {
            cin >> x;
            ans += mp[x-i];
            mp[x-i]++;
        }

        cout << ans << endl;
    }
}


