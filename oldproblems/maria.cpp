#include <iostream>
#include <vector>

using namespace std;

int main() {
    long t;
    cin >> t;

    while (t--) {
        long n, x;
        cin >> n;

        vector<long>  grannies;

        for (int i = 0; i < n; i++) {
            cin >> x;
            grannies.push_back(x);
        }
        
        sort(grannies.begin(), grannies.end());
        
        long max = -1;

        for (int i = 0; i < n; i++) {
            if (i + 1 >= grannies[i]) {
                max = i;
            }
        }

        cout << max + 2 << endl;
    }
}
