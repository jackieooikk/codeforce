#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;

        string s;
        cin >> s;

        int count = 0;

        for (int i = 0 ;i < n; i++) {
            if (s[i] == '0') {
                count++;
            }
        }
        
        int mid = (n % 2 == 1 && s[n/2] == '0') ? 1 : 0;

        if (mid && count > 1) {
            cout << "ALICE\n";
        } else {
            cout << "BOB\n";
        }

   }
}
