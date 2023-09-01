#include <iostream>

using namespace std;

int main() {
    long t;
    cin >> t;

    while (t--) {
        long long a, b, c;

        cin >> a >> b >> c;

        long long one_stack = a * b;

        if (c <= a) {
            cout << "-1 ";
        } else {
            cout << "1 ";
        }

        if (c < one_stack) {
            cout << b << endl;
        } else {
            cout << "-1\n";
        }

    }
}
