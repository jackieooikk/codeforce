#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string one;
        string two;
        string s;

        cin >> s;

        int ticker = 0;

        for (int i = 0; i < n; i++) {
            int c;
            c = s[i] - '0';
            
            if (c == 2) {
                if (ticker) {
                    one += '0';
                    two += '2';
                } else {
                    one += '1';
                    two += '1';
                }
            } else if (c == 1) {
                if (!ticker) {
                    two += '0';
                    one += '1';
                    ticker = 1;
                } else {
                    one += '0';
                    two += '1';
                }
            } else {
                one += '0';
                two += '0';
            }
        }

        cout << one << endl << two << endl;
    }
}

