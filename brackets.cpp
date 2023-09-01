#include <iostream>

using namespace std;

int main() {
    long n, k;
    cin >> n;
    string brackets;

    while (n--) {
        cin >> k >> brackets;
        int open, closed, changes;

        open = 0;
        closed = 0;
        changes = 0;

        for (int i = 0; i < k; i++) {
            if (brackets[i] == '(') {
                open++;
            } else {
                if (open <= closed) {
                    changes++;
                } else {
                    closed++;
                }
            }
        }

        cout << changes << endl;
    }
    return 0;
}

