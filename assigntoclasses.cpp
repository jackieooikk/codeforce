#include <iostream>

using namespace std;

int  main() {
    long t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;

        long long results[n*2];

        for (int i = 0; i < n * 2; i++) {
            cin >> results[i];
        }

        sort(results, results + n * 2);

        cout << results[n] - results[n-1] << endl;
    }
}
