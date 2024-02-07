#include <iostream>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    string board[n];

    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }

    for (int i = 0; i < n; i++) {
        string s = board[i];

        for (int j = 0; j < m; j++) {
            if (s[j] == '.') {
                if ((i + j) % 2 == 0) {
                    s[j] = 'B';
                } else {
                    s[j] = 'W';
                }
            }
        }
        
        cout << s << endl;
    }
}

