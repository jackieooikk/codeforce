#include <iostream>
using namespace std;

int main() {
    long t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b;

        if (b > a) {
            c = a;
            a = b;
            b = c;
        } else if (b == a) {
            cout << 0 << endl;
            continue;
        }

        if (a % b != 0) {
            cout << -1 << endl;
            continue;
        }


        c = a/b;
        long long steps = 0;

        while (c > 1) {
            if (c % 8 == 0) {
                c /= 8;
                steps++;
            } else if (c % 4 == 0) {
                c /= 4;
                steps++;
            } else if (c % 2 == 0) {
                c /= 2;
                steps++;
            } else {
                steps = -1;
                break;
            }
        }
        

        cout << steps << endl;
    }
}

