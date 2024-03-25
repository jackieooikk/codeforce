#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, min;

        cin >> n >> min;
        
        long long line[n];
        
        for (int i = 0; i < n; i++) {
            cin >> line[i];
        }

        sort(line, line + n);
        
        long long total = 0;
        long long count = 0;
        for (int i = n - 1; i >= 0; i--) {
            total += line[i];

            if (total / (n - i) >= min) {
                count++;
            } else {
                break;
            }
        }

        cout << count << endl;
    }
}

