#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n, root;
        cin >> n;
        
        if (n % 2 == 0) {
            long x = n/2;
            long y = sqrt(x);
            if (y * y == x) {
                cout << "YES" << endl;
                continue;
            }
        }

        if (n % 4 == 0) {
            long x = n/4;
            long y = sqrt(x);
            if (y * y == x) {
                cout << "YES" << endl;
                continue;
            }
        }

        cout << "NO\n";
    }
}
