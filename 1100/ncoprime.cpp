#include <iostream>
#include <cmath>

using namespace std;


int prime(int n) {
    if (n < 2) {
        return -1;
    }

    for (int i = 2; i < sqrt(n) + 1; i++) {
        if (n % i == 0) {
            return i;
        }
    }
    return -1;
}



int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;

        cin >> l >> r;

        if (r < 4) {
            cout << -1 << endl;
            continue;
        }

        if (l != r) {
            if (r % 2 != 0) {
                r--;
            }

            cout << 2 << " " << r - 2 << endl;
        } else {
            
            int i = prime(l);
            if (i == -1) {
                cout << -1 << endl;
            } else {
                cout << i << " " << l - i << endl;
            }
        }
        
    }
}
