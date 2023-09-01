#include <iostream>
using namespace std;

int main() {
    long k;
    cin >> k;

    string s;

    cin >> s;

    sort(s.begin(), s.end());
    int valid = 1;
    char first, last;
    long n = s.size()/k;
    for (int i = 0; i < s.size(); i++) {
        if (i % k == 0) {
            first = s[i];
        }

        if (i % k == k - 1) {
            last = s[i];
            if (first != last) {
                valid = 0;
            }
        }
    }

    if (valid == 0 || s.size() % k != 0) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < s.size(); j += k) {
                cout << s[j];
            }
        }
        cout << endl;
    }
}
