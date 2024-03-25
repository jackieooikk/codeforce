#include <iostream>

using namespace std;


int main() {
    long t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        
        long long ns[n];
        long long ms[m];

        for (int i = 0; i < n; i++) {
            cin >> ns[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> ms[i];
        }
        
        sort(ns, ns + n);

        long nIndex = 0;
        long mIndex = 0;

        while (mIndex < m) {
            ns[0] = ms[mIndex];
            sort(ns, ns + n);
            mIndex++;
        }

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += ns[i];
        }

        cout << sum << endl;

   }
}

