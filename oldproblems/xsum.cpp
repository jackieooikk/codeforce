#include <iostream>

using namespace std;

int main() {
    long t;
    cin >> t;

    while (t--) {
        long n, m;
        cin >> n >> m;

        long board[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> board[i][j];
            }
        }

        long max = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                long sum = board[i][j];

                for (int vert = -1 ; vert < 2; vert += 2) {
                    for (int hor = -1; hor < 2; hor += 2) {
                        long current_i = i + hor;
                        long current_j = j + vert;
                        
                        
                        while (current_i >= 0 && current_i < n && current_j >= 0 && current_j < m) {
                            sum += board[current_i][current_j];
                            current_i += hor;
                            current_j += vert;
                        }
                    }
                }

                max = (sum > max) ? sum : max;
            }
        }

        cout << max << endl;
    }
}
