#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;


    int one, two, current;
    one = 0;
    two = 0;

    for (int i = 0; i < n; i++) {
        cin >> current;

        if (current/25 == 1) {
            one++;
        } else if (current/25 == 2) {
            if (one == 0) {
                cout << "NO\n";
                return 0;
            }
            two++;
            one--;
        } else {
            if (one > 0 && two > 0) {
                one--;
                two--;
            } else if (one > 2) {
                one -= 3;
            } else {
                cout << "NO\n";
                return 0;
            }
        }
    }

    cout << "YES\n";
    return 0;
}




