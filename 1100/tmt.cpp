#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int _;
        cin >> _;

        string s;
        cin >> s;

        int T = 0;
        int TM = 0;
        int TC = 0;
        int valid = 1;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'T') {
                if (TM > 0) {
                    TM--;
                    TC++;
                } else {
                    T++;
                }
            } else {
               if (T > 0) {
                   TM++;
                   T--;
               } else if (TC > 0) {
                   TM += 2;
                   TC--;
               } else {
                   valid = 0;
                   break;
               }
            }
        }

        if (!valid) {
            cout << "NO" << endl;
        } else {
            if (T == 0 && TM == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}


