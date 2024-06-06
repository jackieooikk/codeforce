#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> values(n);
        vector<int> type(n);

        for (int i = 0; i < n; i++) {
            cin >> values[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> type[i];
        }


        int ascending = 1;
        int uniqueType = 1;
        for (int i = 1; i < n; i++) {
            if (values[i] < values[i-1]) {
                ascending = 0;
            }

            if (type[i] != type[0]) {
                uniqueType = 0;
            }
        }

        if (ascending || !uniqueType) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
}

        
