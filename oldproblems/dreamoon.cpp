#include <iostream>
using namespace std;
int main() {
    long n, m;
    cin >> n >> m;

    if (m > n) {
        cout << "-1\n";
    } else {
        long remainder = n % 2;
        long minimum = n / 2;

        while ((minimum + remainder) % m != 0) {
            minimum++;
        }
        if (minimum + remainder <= n) {
            cout << minimum + remainder << endl;
        } else {
            //cout << "-1\n";
        }
    }
    return 0;
}



