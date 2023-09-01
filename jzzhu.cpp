#include <iostream>
using namespace std;

int main() {
    long n, m, a;

    cin >> n >> m;

    long line[n];

    for (int i = 0; i < n; i++) {
        cin >> a;
        line[i] = (a - 1)/m;
    }

    long last_to_leave = 0;
    for (int i = 1; i < n; i++) {
        if (line[i] >= line[last_to_leave]) {
            last_to_leave = i;
        }
    }

    last_to_leave++;

    cout << last_to_leave << endl;
}
