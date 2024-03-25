#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, x, y, n;

        cin >> a >> b >> x >> y >> n;

        long long al, bl;

        al = (x > a - n) ? x : a - n;
        bl = (y > b - n) ? y : b - n;
        if (al < bl) {
            bl = b - (n - (a - al));
            if (bl < y) {
                bl = y;
            }
        } else {
            al = a - (n - (b - bl));
            if (al < x) {
                al = x;
            }
        }
        cout << al * bl << endl;
    }
}


