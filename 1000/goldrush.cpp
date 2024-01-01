#include <iostream>

using namespace std;

int check(int n, int m) {
    if (n == m) {
        return 1;
    }

    if (n % 3 == 0) {
        return check(n / 3, m) + check(n * 2 / 3, m);
    } else {
        return 0;
    }
}




int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int x;

        x = check(n, m);

        if (x > 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}



