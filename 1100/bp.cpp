#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int line[n];

        for (int i = 0; i < n; i++) {
            cin >> line[i];
        }

        int lowest = line[n - 1];
        int count = 0;
        for (int i = n - 2; i >= 0; i--) {
            if (line[i] <= lowest) {
                lowest = line[i];
            } else {
                count++;
            }
        }

        cout << count << endl;
    }
}
