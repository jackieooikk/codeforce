#include <iostream>
using namespace std;

int main() {
    int total;
    total = 0;
    for (int i = 0; i < 5; i++) {
        int number;
        cin >> number;
        total += number;
    }

    if (total % 5 != 0 || total == 0) {
        cout << -1 << endl;
    } else {
        cout << total / 5 << endl;
    }
}

