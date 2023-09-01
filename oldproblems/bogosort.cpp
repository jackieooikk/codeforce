#include <iostream>

using namespace std;

int main() {
    long t;
    cin >> t;

    while (t--) {
        long n;
        cin >> n;

        long line[n];

        for (int i = 0; i < n; i++) {
            cin >> line[i];
        }

        sort(line, line + n);

        for (int i = n; i > 0; i--) {
            cout << line[i-1] << " ";
        }
        cout << endl;
    }
}
