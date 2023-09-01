#include <iostream>
using namespace std;

int main() {
    long test;
    cin >> test;

    while (test--) {
        long n;
        cin >> n;
        long x = n;
        long count = 0;


        while (count < x - ((n + 3) / 4)) {
            cout << 9;
            count++;
        }

        while (count < x) {
            cout << 8;
            count++;
        }

        cout << endl;

    }
}
