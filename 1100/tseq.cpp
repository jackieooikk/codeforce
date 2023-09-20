#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int first[3];
        int second[3];

        for (int i = 0; i < 3; i++) {
            cin >> first[i];
        }

        for (int i = 0; i < 3; i++) {
            cin >> second[i];
        }

        int total = 0;

        int min = (first[2] < second[1]) ? first[2] : second[1];

        first[2] -= min;
        second[1] -= min;

        total += min * 2;

        min = first[0] + first[2];

        if (min < second[2]) {
            total -= (second[2] - min) * 2;
        }

        cout << total << endl;
    }
}

