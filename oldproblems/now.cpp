#include <iostream>
using namespace std;


int main() {

    long t;
    cin >> t;

    while (t--) {
        int first = 1;
        long n;

        cin >> n;

        cout << 2 << endl;
        while (n > 2) {
            cout << n - 2 << " " << n << endl;
            n--;
            if (first) {
                cout << n << " " << n << endl;
                first--;
            }
        }

        if (first) {
            cout << "1 2" << endl;
        }
    }
}
                
