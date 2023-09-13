#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string letters[n];

        for (int i = 0; i < n; i++) {
            cin >> letters[i];
        }

        for (int i = 0; i < n; i++) {
            string primary = letters[i];
            int match = 0;
            for (int j = 0; j < n; j++) {
                string first = letters[j];
                for (int k = 0; k < n; k++) {
                    string second = letters[k];
                    if (i != j && i != k && primary.length() == first.length() + second.length()) {
                        if (primary == first + second) {
                            match = 1;
                        }
                    }
                }
                if (match) {
                    break;
                }
            }
            if (match) {
                cout << 1;
            } else {
                cout << 0;
            }
        }

        cout << endl;
    }
}

