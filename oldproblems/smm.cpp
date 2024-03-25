#include <iostream>

using namespace std;

int main() {
    long testcases;
    cin >> testcases;
    while (testcases--) {
        long n, k;

        cin >> n >> k;

        long line[k];

        for (int i = 0; i < k; i++) {
            cin >> line[i];
            line[i] = n - line[i];
        }

        sort(line, line + k);

        long count = 0;
        
        while (n > 0 && count <= k) {
            n = n - line[count];
            count++;

        }

        cout << count - 1 << endl;
    }
}


