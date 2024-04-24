#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string table[9];

        for (int i = 0; i < 9; i++) {
            cin >> table[i];
        }

        int rows[9] = {0};
        int columns[9] = {0};
       
        
        for (int i = 0; i < 9; i++) {
            int j;
            j = i%3 * 3 + i/3;

            if (table[i][j] == '9') {
                table[i][j] = '1'; 
            } else {
                table[i][j]++;
            }
        }
        
        for (int i = 0; i < 9; i++ ){
            cout << table[i] << endl;
        }
        
    }

}
