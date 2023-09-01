#include <iostream>

using namespace std;




int main() {
    long t;
    cin >> t;

    while (t--) {
        long n;
        cin >> n;

        long line[n];

        for (int i = 0; i < n; i++) {
            cin >> line[i];
        }
        
        sort(line, line + n);
 
        long max = line[0];

        for (int i = 1; i < n; i++) {
            if (max < (line[i] - line[i-1])) {
                max = line[i] - line[i-1];
            }

            //for (int j = i + 1; j < n; j++) {
            //    line[j] -= line[i];
            //}
        }

        cout << max << endl;

    }
}

