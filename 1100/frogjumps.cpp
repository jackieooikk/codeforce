#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int d = 0;
        int a = 0;
        for (int i = 0; i <= s.size(); i++) {
            a++;
            if (s[i] == 'R' || s[i] == '\0') {
                d = (d > a) ? d : a;
                a = 0;
            }
        }

        cout << d << endl;
    }
}
