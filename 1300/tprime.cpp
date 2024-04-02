#include <iostream>
#include <cmath>

using namespace std;

int prime(long long n) {
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long number;
        cin >> number;

        long long root = sqrt(number);
        
        if (root * root != number || number == 1) {
            cout << "NO\n";
            continue;
        }

        if (prime(root)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

       
    }
}
