#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, _;

        cin >> n >> _;

        if (n % 3 == 0) {
            cout << n/3 << " " << n/3 << " " << n/3 << endl;
        } else if (n % 2 == 1) {
            cout << n/2 << " " << n/2 << " " << 1 << endl;
        } else if (n % 4 == 0) {
            cout << n/2 << " " << n/4 << " " << n/4 << endl;
        } else {
            cout << (n-2)/2 << " " << (n-2)/2 << " " << 2 << endl;
        }
    }
}

