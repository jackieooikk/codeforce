#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    
    int moves, row, column, value;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> value;
            if (value == 1) {
                row = i;
                column = j;
            }
        }
    }

    moves = abs(2 - row) + abs(2 - column);
    cout << moves << endl;
}
