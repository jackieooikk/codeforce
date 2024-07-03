#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (n > 1099) {
            cout << "YES\n";
            continue;
        }

        int valid = 0;
        while (n >= 0) {
            if (n % 11 == 0) {
                valid = 1;
                break;
            }
            n -= 111;
        }

        if (valid) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        
    }
}


