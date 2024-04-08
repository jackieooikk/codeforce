#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int line[n];

    for (int i = 0; i < n; i++) {
        cin >> line[i];
    }

    long long low, high, lowc, highc;

    low = line[0];
    high = line[0];
    lowc = 1;
    highc = 1;

    for (int i = 1; i < n; i++) {
        if (line[i] > high) {
            high = line[i];
            highc = 1;
        } else if (line[i] == high) {
            highc++;
        }

        if (line[i] < low) {
            low = line[i];
            lowc = 1;
        } else if (line[i] == low) {
            lowc++;
        }
    }

    cout << high - low << " ";

    if (high == low) {
        highc--;
        cout << (highc * lowc) /2 << endl;

    } else {
        cout << highc * lowc << endl;
    }
    
}
