#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;

        cin >> a >> b;

        if (a < b) {
            c = b;
            b = a;
            a = c;
        }

        c = a - b;

        if (c >= b) {
            cout << b << endl;
        } else {
            long long total = c;
            a -= c * 2;
            b -= c;
            cout << total + a*2/3 << endl;
        }

    }
}
