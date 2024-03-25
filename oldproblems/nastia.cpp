#include <iostream>
using namespace std;

int main() {
    long testcases;
    cin >> testcases;
    
    while (testcases--) {
        long long A, B;
        cin >> A >> B;

        long long x, y, z;

        z = A * B * 2;
        y = A;
        x = z - y;

        if (B == 1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            cout << x << " " << y << " " << z << endl;
        }
    }
    return 0;
}




