#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

ll gcd(ll a, ll b) {
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        ll line[n];

        ll x = 0;
        ll y = 0;

        for (int i = 0; i < n; i++) {
            cin >> line[i];
            
            if (i % 2 == 0) {
                x = gcd(x, line[i]);
            } else {
                y = gcd(y, line[i]);
            }
        }

        int valid = 1;
        for (int i = 0; i < n; i+=2) {
            if (line[i] % y == 0) {
                valid = 0;
                break;
            }
        }
        
        if (valid) {
            cout << y << endl;
            continue;
        }
        
        valid = 1;
        for (int i = 1; i < n; i+=2) {
            if (line[i] % x == 0) {
                valid = 0;
                break;
            }
        }
        
        if (valid) {
            cout << x << endl;
        } else {
            cout << 0 << endl;
        }
    }
}




