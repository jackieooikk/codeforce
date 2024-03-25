#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, m, a;

    cin >> n;
    
    
    if (n == 0) {
        cout << 1 << endl;
        return 0;
    }
    n = n % 100;
    m = n % 4;
    if (m == 0) {
        m = 4;
    }

    a = pow(78, m);

    a = a % 10;

    cout << a << endl;

    return 0;
}

