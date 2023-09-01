#include <iostream>
using namespace std;

int main() {
    long testcases;

    cin >> testcases;
    while(testcases--) {
        long long a, b, n, sum;

        cin >> a >> b >> n >> sum;

        if (sum >= a * n) {
            sum -= a * n;
        } else {
            sum = sum % n;
        }

        if (b >= sum) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

