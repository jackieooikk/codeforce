#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int line[n];

        for (int i = 0; i < n; i++) {
            cin >> line[i];
        }

        sort(line, line + n);
        int r, l;
        r = n - 1;
        l = 0;

        int ans[n];

        for (int i = n - 1; i >= 0; i--) {
            if (i % 2) {
                ans[i] = line[l];
                l++;
            } else {
                ans[i] = line[r];
                r--;
            }
        }
        
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}
