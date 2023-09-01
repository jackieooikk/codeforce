#include <iostream>
using namespace std;

int main() {
    long testcases;

    cin >> testcases;

    while (testcases--) {
        long n, m, x, y;
        cin >> n >> m >> x >> y;
        
        long long cost = 0;

        for (int i = 0; i < n; i++) {
            int tile_counter = 0;
            string tiles;
            cin >> tiles;
            for (int j = 0; j < m; j++) {
                
                if (tiles[j] == '.') {
                    tile_counter++;
                }

                if (tile_counter == 2) {
                    if (x * 2 > y) {
                        cost += y;
                    } else {
                        cost += x * 2;
                    }
                    tile_counter = 0;
                } else if (tiles[j] == '*' && tile_counter == 1) {
                    cost += x;
                    tile_counter = 0;
                }
            }
            if (tile_counter == 1) {
                cost += x;
            }
        }
        cout << cost << endl;
    }

}

