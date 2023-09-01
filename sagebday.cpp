#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    long long prices[n];

    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    long long final_prices[n];
    long long max = 0;


    sort(prices, prices + n);
    
    int j = 0;
    for (int i = n/2; i < n; i++) {
        final_prices[j] = prices[i];
        j += 2;
    }

    for (int i = 0; i < n/2; i++) {
        final_prices[i * 2 + 1] = prices[i];
    }


    for (int i = 1; i < n; i += 2) {
        if (i + 1 != n) {
            if (final_prices[i] < final_prices[i-1] && final_prices[i] < final_prices[i+1]) {
                max++;
            }
        }
    }

    cout << max << endl;


    for (int i = 0; i < n; i++) {
        cout << final_prices[i] << " ";
    }
    cout << endl;
}


