#include <iostream>

using namespace std;

int main() {

    long n, k, extra;

    cin >> n >> k;

    extra = 0;

    long days[n];

    for (int i = 0; i < n; i++) {
        cin >> days[i];

        if (i != 0) {
            if (days[i] + days[i-1] < k) {
                extra += k - days[i] - days[i-1];
                days[i] = k - days[i-1];
            }
        }
    }

    cout << extra << endl;

    for (int i = 0; i < n; i++) {
        cout << days[i] << " ";
    }
    cout << endl;
}

    
