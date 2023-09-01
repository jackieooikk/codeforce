#include <iostream>

using namespace std;


int main() {
    long t;
    cin >> t;

    while (t--) {

        long r, g, b, w;

        cin >> r >> g >> b >> w;

        long total = r + g + b + w;

        long total_rgb = (r % 2) + (g % 2) + (b % 2);

        if (total_rgb == 0) {
            cout << "YES" << endl;
        } else if (total_rgb == 3) {
            if (r > 0 && g > 0 && b > 0) {
                cout << "YES";
            } else {
                cout << "NO";
            }
            cout << endl;
        } else if (total_rgb == 1) {
            if (w % 2 == 0) {
                cout << "YES";
            } else {
                cout << "NO";
            }
            cout << endl;
        } else {
            if (r > 0 && g > 0 && b > 0 && w % 2 == 1) {
                cout << "YES";
            } else {
                cout << "NO";
            }
            cout << endl;
        }
    }
}
