#include <iostream>

using namespace std;

int main() {
    int t;
    
    cin >> t;

    while (t--) {
        int sum, n;
        cin >> sum >> n;

        if (sum % 2 == 1 && n % 2 == 0) {
            cout << "NO\n";
        } else if (n > sum) {
            cout << "NO\n";
        } else if (sum % 2 == 0 && n % 2 == 0) {
            cout << "YES\n";
            for (int i = 1; i < n; i++) {
                cout << "1 ";
            }
            cout << sum - n + 1 << endl;
        } else {
            if (sum % 2 == 1) {
                cout << "YES\n";
                for (int i = 1; i < n; i++) {
                    cout << "1 ";
                }
                cout << sum - n + 1 << endl;
            } else {
                if (sum < n * 2) {
                    cout << "NO\n";
                } else {
                    cout << "YES\n";
                    int counted = 0;
                    for (int i = 1; i < n; i++) {
                        cout << "2 ";
                        counted += 2;
                    }

                    cout << sum - counted << endl;
                }
            }
        }
    }
}


