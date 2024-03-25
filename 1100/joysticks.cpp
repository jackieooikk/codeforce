#include <iostream>

using namespace std;

int main() {
    int first, second;

    cin >> first >> second;

    int t = 0;

    while (first > 0 && second > 0) {
        if (first == 1 && second == 1) {
            break;
        }
        t++;

        if (first < second) {
            first += 1;
            second -= 2;
        } else {
            second += 1;
            first -= 2;
        }
    }

    cout << t << endl;
}
