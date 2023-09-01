#include <iostream>

using namespace std;

int main() {
    int a, m, n, o;
    cin >> m >> n;

    a = m * n;
    
    if (a % 2 == 0) {
        o = a/2;
    } else {
        o = (a - 1)/2;
    }

    cout << o << endl;

    return 0;
}

