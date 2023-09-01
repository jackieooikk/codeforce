#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int cases[n][n-1];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                cin >> cases[i][j];
            }
        }

        int oddoneout = 0;
        
        int first = cases[0][0];
        for (int i = 1; i < n; i++) {
            if (cases[i][0] != first) {
                if (oddoneout != 0) {
                    oddoneout = 0;
                    break;
                } else {
                    oddoneout = i;
                }
            }
        }

        if (oddoneout == 0) {
            cout << cases[1][0] << " ";
        } else {
            cout << first << " ";
        }

        for (int i = 0; i < n - 1; i++) {
            cout << cases[oddoneout][i] << " ";

        }
        cout << endl;

    }
}

