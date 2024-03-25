#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        char first = s[0];
        int different = 0;

        for (int i = 0; i < s.size(); i++) {
            if (first != s[i]) {
                different = 1;
            }
        }

        if (different) {
            for (int i = 0; i < s.size() * 2; i += 2) {
                cout << "10";
            }
            cout << endl;
        } else {
            cout << s << endl;
        }
    }
}


