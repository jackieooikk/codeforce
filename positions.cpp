#include <iostream>
using namespace std;

int main() {
    long count, a, b, n;
    count = 0;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++) {
        if (i - a > 0 && i + b >= n) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
    }
