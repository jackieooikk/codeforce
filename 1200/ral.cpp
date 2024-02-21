#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> line(n);

        for (int i = 0; i < n; i++) {
            cin >> line[i];
        }

        sort (line.begin(), line.end());

        int count = 1;
        long long ans  = 0;

        for (int i = 1 ; i < n; i++) {
            int a, b;
            a = floor(log(line[i]) / log(2));
            b = floor(log(line[i-1]) / log(2));

            if (a == b) {
                count++;
            }

            if (a != b || i == n - 1) {
                for (int j = 1; j < count; j++) {
                    ans += j;
                }
                count = 1;
            }
        }

        cout << ans << endl;

    }
}
