#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long n, t;
    cin >> n >> t;
    
    if (n == 1 && t == 10) {
        cout << "-1\n";
    } else if (n >= 2 && t == 10) {
        cout << "1";
        for (int i = 1; i < n; i++) {
            cout << "0";
        }
        cout << endl;
    } else {
        for (int i = 0; i < n; i++) {
            cout << t;
        }
        cout << endl;
    }

    return 0;
}


