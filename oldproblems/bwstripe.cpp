#include <iostream>

using namespace std;

int main() {
    long t;
    cin >> t;

    while (t--) {
        long k, n;

        cin >> k >> n;

        string s;

        cin >> s;

        long min;

        long counter = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'W') {
                counter++;
            }
        }
        min = counter;

        for (int i = n; i < k; i++) {
            if (s[i - n] == 'W') {
                counter--;
            }

            if (s[i] == 'W') {
                counter++;
            }

            if (counter < min) {
                min = counter;
            }

            if (min == 0) {
                break;
            }
        }

        cout << min << endl;
    }
}
