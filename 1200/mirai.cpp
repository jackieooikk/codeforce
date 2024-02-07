#include <iostream>

typedef long long ll;

using namespace std;

int main() {
    int n;
    cin >> n;

    int line[n];
    int sorted[n];

    for (int i = 0; i < n; i++) {
        cin >> line[i];
        sorted[i] = line[i];
    }

    sort(sorted, sorted + n);
    
    ll sum1[100010] = {0};
    ll sum2[100010] = {0};

    for (int i = 1 ; i <= n; i++) {
        sum1[i] = sum1[i-1] + line[i-1];
        sum2[i] = sum2[i-1] + sorted[i-1];
    }


    int t;
    cin >> t;

    while (t--) {
        int type, l, r;

        cin >> type >> l >> r;

        ll* numbers;

        if (type == 1) {
            numbers = sum1;
        } else {
            numbers = sum2;
        }

        cout << numbers[r] - numbers[l-1] << endl;
    }
}


