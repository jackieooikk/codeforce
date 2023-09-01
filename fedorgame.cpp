#include <iostream>

using namespace std;

int main() {
    int k, n, m;

    cin >> n >> m >> k;
    
    int data[m+1][n];

    for (int i = 0; i < m + 1; i++) {
        int soldiers;
        cin >> soldiers;

        for (int j = n - 1; j >= 0; j--) {
            data[i][j] = soldiers % 2;
            soldiers /= 2;
        }

    }

    int different = 0;
    for (int i = 0; i < m; i++) {
        int different_k = 0;
        for (int j = 0; j < n; j++) {
            if (data[i][j] != data[m][j]) {
                different_k++;
            }
        }

        if (different_k <= k) {
            different++;
        }
    }

    cout << different << endl;
}
