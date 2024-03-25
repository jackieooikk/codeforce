#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long one, two, three;

        cin >> one >> two >> three;

        long long total = one + two + three;

        long long min = total / 9;
        min--;

        if (total % 9 == 0 && one > min && two > min && three > min) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
