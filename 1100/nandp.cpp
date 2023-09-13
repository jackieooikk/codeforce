#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int line[n];
        int count = 0;
        long long total = 0;

        for (int i = 0; i < n; i++) {
            cin >> line[i];
            
            if (line[i] < 0) {
                line[i] *= -1;
                count++;
            }

            total += line[i];
        }

        sort(line, line + n);

        if (count % 2 == 0) {
            cout << total << endl;
        } else {
            cout << total - line[0] * 2 << endl;
        }




   }
}
