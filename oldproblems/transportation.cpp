#include <iostream>
using namespace std;

int main() {
    long long n, t, index;
    cin >> n >> t;
    long long line[n - 1];
    for (int i = 0; i < (n - 1); i++) {
        cin >> line[i];
    }

    index = 0;
    while (index < t - 1) {
        index += line[index];
    }

    if (index == t - 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
