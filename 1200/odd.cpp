#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, e;

        cin >> n >> e;

        int x;

        int odd = 0;
        int even = 0;   

        for (int i = 0; i < n; i++) {
            cin >> x;

            if (x % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
        

        if (n == e) {
            if (odd % 2 == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else if (e % 2 == 0) {
            if (odd > 0 && even > 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            if (odd > 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}
            

