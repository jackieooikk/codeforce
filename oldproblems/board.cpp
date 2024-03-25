#include <iostream>

using namespace std;

int main() {
    unsigned long long int covered, moves, testcases, length;
    cin >> testcases;
    while (testcases--) {
        moves = 0;
        covered = 0;
        cin >> length;
        while (length > 1) {
            moves += covered;
            covered += length * 4 - 4;
            moves += length * 4 - 4;
            length -= 2;
        }
        cout << moves << endl;
    }
    return 0;
}
