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

        int odd = 0;
        int even = 0;
        int consecutive = 0;
        for (int i = 0; i < n; i++) {
            if (line[i] % 2 == 0) { 
                even++;
            } else {
                odd++;
            }

            if (i != n - 1 && line[i] == line[i + 1] - 1) {
                consecutive = 1;
            }
        }
        
        if (odd % 2 == 1) {
            if (consecutive) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "YES\n";
        }
    }
}
