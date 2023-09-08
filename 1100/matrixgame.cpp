#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;

        int emptyrows[n];
        int emptycolumns[m];
        int cell;

        int available_n = n;
        int available_m = m;

        for (int i = 0; i < n; i++) {
            emptyrows[i] = 0;
        }
        for (int i = 0; i < m; i++) {
            emptycolumns[i] = 0;
        }


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> cell;
                if (cell == 1) {
                    if (emptyrows[i] == 0) {
                        emptyrows[i]++;
                        available_n--;
                    } 

                    if (emptycolumns[j] == 0) {
                        emptycolumns[j]++;
                        available_m--;
                    }
                }
            }
        }

        int min = (available_n < available_m) ? available_n : available_m;

        if (min % 2 != 1) {
            cout << "Vivek\n";
        } else {
            cout << "Ashish\n";
        }
    }
}



