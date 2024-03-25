#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;


    int finger;
    long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> finger;
        sum += finger;
    }

    int canHold = 0;
    for (int i = 1; i < 6; i++) {
        if ((sum + i) % (n + 1) != 1) {
            canHold++;
        }
    }

    cout << canHold << endl;
}

