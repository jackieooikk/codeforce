#include <iostream>

#define ll long long

using namespace std;

ll min_and_max(ll n) {

    int min = n % 10;
    int max = n % 10;

    n /= 10;

    while (n > 0) {
        int dum = n % 10;
        n /= 10;

        if (dum < min) {
            min = dum;
        } 

        if (dum > max) {
            max = dum;
        }
    }

    return min * max;
}


int has_zero(ll n) {

    while (n) {
        if (n % 10 == 0) {
            return 1;
        } 

        n /= 10;
    }

    return 0;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll a, k;

        cin >> a >> k;

        while (k > 1) {
            if (has_zero(a)) {
                break;
            }
            a += min_and_max(a);
            k--;
        }

        cout << a << endl;
    }
}
