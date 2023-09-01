#include <iostream>
using namespace std;

int main() {
    long n;
    cin >> n;

    pair<long, long> laptops[n];

    for (int i = 0; i < n; i++) {
        cin >> laptops[i].first >> laptops[i].second;
    }

    sort(laptops, laptops + n);

    for (int i = 0; i < n - 1; i++) {
        if (laptops[i].second > laptops[i+1].second) {
            cout << "Happy Alex\n";
            return 0;
        }
    }

    cout << "Poor Alex\n";
}


