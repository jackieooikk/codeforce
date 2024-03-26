#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> line(n);

    for (int i = 0; i < n; i++) {
        cin >> line[i];
    }

    int sum = line[0] % 2 + line[1] % 2 + line[2] % 2;

    int parity;

    if (sum == 0 || sum == 1) {
        parity = 1;
    } else {
        parity = 0;
    }

    for (int i = 0; i < n; i++) {
        if (line[i] % 2 == parity) {
            cout << i + 1 << endl;
            return 0;
        }
    }

}

