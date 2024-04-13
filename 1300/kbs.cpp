#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;

        cin >> n >> k;


        int a, b;

        int c = 1;
        int total = 0;

        while (total + c < k) {
            total += c;
            c++;
        }

        a = n - c - 1;
        b = n - (k - total);
        
        for (int i = 0; i < n; i++) {
            if (i != a && i != b) {
                cout << 'a';
            } else {
                cout << 'b';
            }
        }
        cout << endl;
    }
}

