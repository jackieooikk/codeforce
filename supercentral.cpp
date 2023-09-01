#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x[n];
    int y[n];

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int supercentral = 0;

    for (int i = 0; i < n; i++) {

        int args[4] = {0,0,0,0};

        for (int j = 0; j < n; j++) {
            if (x[i] == x[j]) {
                if (y[i] < y[j]) {
                    args[0] = 1;
                } else if (y[i] > y[j]) {
                    args[1] = 1;
                }
            } else if (y[i] == y[j]) {
                if (x[i] < x[j]) {
                    args[2] = 1;
                } else if (x[i] > x[j]) {
                    args[3] = 1;
                }
            }
        }
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += args[j];
        }

        if (sum == 4) {
            supercentral++;
        }
    }

    cout << supercentral << endl;
}



