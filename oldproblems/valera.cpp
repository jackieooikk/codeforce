#include <iostream>
using namespace std;

int main() {
    long n;
    cin >> n;

    string table[n];

    for (int i = 0; i < n; i++) {
        cin >> table[i];
    }


    char x = table[0][0];
    char notX = table[0][1];

    if (x == notX) {
        cout << "NO\n";
        return 0;
    }


    int success = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                if (table[i][j] != x) {
                    success = 0;
                }
            } else {
                if (table[i][j] != notX) {
                    success = 0;
                }
            }
        }
    }

    if (success) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
