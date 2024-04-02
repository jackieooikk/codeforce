#include <iostream>
#include <cmath>

using namespace std;

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

        int valid = 1;

        for (long long i = 2; i < root; i++) {
            if (number % i == 0) {
                valid = 0;
                break;
            }
        }

        if (valid) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
