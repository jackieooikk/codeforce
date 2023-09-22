#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int line[n];

    for (int i = 0; i < n; i++) {
        cin >> line[i];
    }

    sort(line, line + n);


    int max = 0;
    int count = 1;
    int current;
    current = line[0];

    for (int i = 1; i < n; i++) {
        if (line[i] == current) {
            count++;
        } 

        if (line[i] != current || i == n - 1) {
            max = (max > count) ? max : count;
            current = line[i];
            count = 1;
        }
    }
    if (max <= ((n + 1) / 2)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
