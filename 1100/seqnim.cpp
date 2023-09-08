#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int line[n];

        for (int i = 0; i < n; i++) {
            cin >> line[i];
        }

        int winner = 1;

        for (int i = 0; i < n; i++) {
            if (line[i] == 1) {
                winner = 1 - winner;
            } else {
                winner = 1 - winner;
                break;
            }
        }

        if (winner) {
            cout << "Second\n";
        } else {
            cout << "First\n";
        }
    }
}
