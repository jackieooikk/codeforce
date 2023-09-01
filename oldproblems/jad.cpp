#include <iostream>

using namespace std;

int main() {

    long n, z, f;
    cin >> n;
    z = 0;
    f = 0;

    while (n--) {
        long num;
        cin >> num;

        if (num == 5) {
            f++;
        } else {
            z++;
        }
    }

    if ( z == 0) {
        cout << -1 << endl;
    } else if (f < 9) {
        cout << 0 << endl;
    } else {
        f -= f % 9;

        while (f--) {
            cout << 5;
        }

        while (z--) {
            cout << 0;
        }

        cout << endl;
    }
}
