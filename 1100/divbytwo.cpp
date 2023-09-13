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

        for (int i = n; i > 0; i--) {
            for (int j = 0; j < n; j++) {
                int dummy = line[j];
                while (dummy != i && dummy > 0) {
                    dummy /= 2;
                }

                if (dummy == i) {
                    line[j] = 0;
                    break;
                }
            }
        }


        int valid = 1;
        for (int i = 0; i < n; i++) {
            if (line[i] != 0) {
                valid = 0;
            }

        }

        if (valid) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        
    }
}
