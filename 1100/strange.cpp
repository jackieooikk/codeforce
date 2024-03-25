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

        sort(line, line + n);

        int min = -1;
        int count = 0;
        for (int i = 0; i < n; i++) {
            count++;
            if (line[i] > 0) {
                min = line[i];
                break;
            }
        }

        if (min == -1) {
            cout << count << endl;
            continue;
        } else {
            for (int i = 1 ; i < count ; i++) {
                if (line[i] - line[i-1] < min) {
                    count--;
                    break;
                }
            }

            cout << count << endl;
        }
    }
}
