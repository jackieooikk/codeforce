#include <iostream>

using namespace std;

int main() {
    long t;
    cin >> t;


    while (t--) {
        long n, m;
        cin >> n >> m;

        cout << 'W';

        for (int i = 1; i < m; i++) {
            cout << 'B';
        }
        cout << endl;

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << 'B';
            }
            cout << endl;
        }

    }
}
