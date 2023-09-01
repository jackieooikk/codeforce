#include <iostream>
using namespace std;

int main() {

    long long n, m, a;

    cin >> n >> m;
    
    if (m % n != 0) {
        cout << -1 << endl;
        return 0;
    }

    a = m/n;

    int check = 1;
    long long moves = 0;
    while (check) {
        if (a % 2 == 0) {
            a = a / 2;
            moves++;
        } else if (a % 3 == 0) {
            a = a / 3;
            moves++;
        } else if (a == 1) {
            check = 0;
        } else {
            check = 0;
            moves = -1;
        }
    }

    cout << moves << endl;
}

