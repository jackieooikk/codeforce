#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int first[n];
        int second[n];

        for (int i = 0; i < n ; i++) {
            cin >> first[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> second[i];
        }

        int one, negative_one;
        one = 0;
        negative_one = 0;
        int valid = 1;
        for (int i = 0; i < n; i++) {
            if (first[i] == 1) {
                one = 1;
            } else if (first[i] == -1) {
                negative_one = 1;
            }


            int diff = first[i] - second[i];
            int find = 0;
            int valid_search = 0;

            if (diff < 0) {
                find = 1;
            } else if (diff > 0) {
                find = -1;
            } else {
                valid_search = 1;
            }

            for (int j = 0; j < i; j++) {
                if (first[j] == find) {
                    valid_search = 1;
                    break;
                }
            }

            if (!valid_search) {
                valid = 0;
                break;
            }

            if (one && negative_one) {
                break;
            }
        }

        if (valid) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}


