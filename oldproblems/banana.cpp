#include <iostream>

using namespace std;

int main() {

    int c, m, n;

    cin >> c >> m >> n;
    int tc = 0;
    for (int i = 0; i < n; i++) {
        tc += (i+1) * c;
    }

    int borrow = 0;

    if (tc > m) {
        borrow = tc - m;
    }

    cout <<  borrow << endl;
    return 0;

}
