#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (k * k > n) {
            cout << "NO\n";
            continue;
        }

        long long a = n % 2;
        long long b = k % 2;

        if (a ^ b) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}
