#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;


        int solved = 0;

        for (int i = 2; i <= sqrt(n); i++ ) {
            if (n % i == 0) {
                cout << n/i << " " << n - n/i << endl;
                solved = 1;
                break;
            }
        }

        if (!solved) {
            cout << 1 << " " << n - 1 << endl;
        }
    }
}

