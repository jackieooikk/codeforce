#include <iostream>
#include <cmath>
#include <algorithm>

#define ll long long

using namespace std;


int main() {
    ll n;
    cin >> n;

    ll line[n];

    for (ll i = 0; i < n; i++) {
        cin >> line[i];
    }

    sort(line, line + n);

    ll moves = 0;

    for (ll i = 0; i < n; i++) {
       moves += abs(i + 1 - line[i]); 
    }

    cout << moves << endl;
}
