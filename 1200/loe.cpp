#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int line[n];

    for (int i = 0; i < n; i++) {
        cin >> line[i];
    }

    sort(line, line + n);

    if (line[k] == line[k - 1]) {
        cout << -1 << endl;
    } else {
        cout << line[k - 1] << endl;
    }
}
