#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long line[n];
        
        for (int i = 0; i < n; i++) {
            cin >> line[i];
        }


        long long ans = 0;
        long long holder = 0;


        holder = line[0];
        for (int i = 1; i < n; i++) {

            if (line[i] * holder < 0) {
                ans += holder;
                holder = line[i];
            } else {
                holder = (line[i] > holder) ? line[i] : holder;
            }
        }
        ans += holder;

        cout << ans << endl;
    }
}
