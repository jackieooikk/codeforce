#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> matrix(n);
        for (int i = 0 ; i < n; i++) {
                cin >> matrix[i];
        }

        int valid = 1;
        for (int i = 0 ; i < n-1; i++) {
            for (int j = 0; j < n-1; j++) {
                if (matrix[i][j] == '1') {
                    if (matrix[i+1][j] != '1' && matrix[i][j+1] != '1') {
                        valid = 0;
                    }
                }
            }
        }

    
        if (valid) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
