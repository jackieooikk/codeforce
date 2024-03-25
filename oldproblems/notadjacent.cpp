#include <iostream>
using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;

        if (n == 2) {
            cout << -1 << endl;
        } else {
            long matrix[n][n];
            
            for (int i = 0; i < n*n; i++) {
                long x_index, y_index;
                x_index = i / n;
                y_index = i % n;
                if (y_index % 2 == 1) {
                    x_index = (x_index + 1) % n;
                }
                matrix[x_index][y_index] = i + 1;
            }

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    cout << matrix[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
}
