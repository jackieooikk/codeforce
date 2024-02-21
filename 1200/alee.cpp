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

        int zeros = 0;
        int ones = 0;

        while(s[zeros] == '0') { 
            zeros++;
        }


        while(s[n - 1 - ones] == '1') {
            ones++;
        }

        int remainder = n - ones - zeros;

        if (remainder == 0) {
            cout << s << endl;
        } else {
            while(zeros--) {
                cout << 0;
            }

            cout << 0;

            while(ones--) {
                cout << 1;
            }

            cout << endl;
        }

    }

}

