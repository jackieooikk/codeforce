#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int line[n];
        
        int sum = 0;
        int removable = 0;
        int index = n / 2;

        for (int i = 0; i < n; i++) {
            cin >> line[i];
            sum += line[i];

            if (line[i] % k != 0) {
                removable = 1;

                int point;
                point = (i + 1 < n - i) ? i + 1 : n - i;
                
                if (point < index) {
                    index = point;
                }
            }

        }

        if (sum % k != 0) {
            cout << n << endl;
        } else if (removable) {
            cout << n - index << endl;
        } else {
            cout << -1 << endl;
        }

    }
}


