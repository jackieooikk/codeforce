#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long line[n];

        for (int i = 0; i < n; i++) {
            cin >> line[i];
        }

        sort(line, line + n);

        long long max, current, current_count, unique;
        max = 1;
        current = line[0];
        current_count = 1;
        unique = 1;

        for (int i = 1; i < n; i++) {
            if (line[i] == current) {
                current_count++;
                max = (current_count > max) ? current_count : max;
            } else {
                current = line[i];
                current_count = 1;
                unique++;
            }
        }

        if (unique < max) {
            cout << unique << endl;
        } else if (unique == max) {
            cout << max - 1 << endl;
        } else {
            cout << max << endl;
        }
    }
}


