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

        int i = n - 2;

        int ascending = 1;
        int remove = 0;

        while (i >= 0) {
            if (line[i] < line[i + 1]) {
                ascending = 0;
            }

            if (!ascending && line[i] > line[i + 1]) {
                remove = i + 1;
                break;
            }
            
            i--;
        }

        cout << remove << endl;
    }
}
