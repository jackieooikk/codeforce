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
        int success = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 2; j < n; j++) {
                if (line[i] == line[j]) {
                    success = 1;
                }
            }
        }
        
        if (success) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
