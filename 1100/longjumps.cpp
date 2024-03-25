#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        n++;
        int line[n];

        for (int i = 1; i < n; i++) {
            cin >> line[i];
        }
        

        int results[n];
        int max = 0;

        for (int i = n - 1; i > 0; i--) {
            if (i + line[i] >= n) {
                results[i] = line[i];
            } else {
                results[i] = line[i] + results[i + line[i]];
            }

            max = (results[i] > max) ? results[i] : max;

        }

        cout << max << endl;
    }
}



