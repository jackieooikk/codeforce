#include <iostream>

using namespace std;

#define ll long long
#define pb push_back




int main() {
    ll l, r, a, b, c;

    cin >> l >> r;

    if (l & 1) {
        l++;
    }

    if (r - l >= 2) {
        cout << l << " " << l + 1 << " " << l + 2 << endl;
    } else {
        cout << -1 << endl;
    }
}



