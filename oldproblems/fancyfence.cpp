#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long t;
    cin >> t;

    while (t--) {
        float a;
        cin >> a;

        float b = -360 / (a - 180);

        if (floor(b) == b && b > 0.0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}


