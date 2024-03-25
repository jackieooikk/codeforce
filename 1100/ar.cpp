#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;

        int line[n];
        int ans[n];

        for (int i = 0; i < n; i++) {
            cin >> line[i];
        }

        ans[0] = line[0];

        int valid = 1;
        for (int i = 1; i < n; i++) {
            if (line[i] != 0 && line[i] <= ans[i-1]) {
                valid = 0;
                break;
            }

            ans[i] = line[i] + ans[i-1];
        }

        if (!valid) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < n; i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
}
