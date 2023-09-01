#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    long first[n];
    long second[n-1];
    long third[n-2];

    for (int i = 0; i < n; i++) {
        cin >> first[i];
    }

    for (int i = 0; i < n-1; i++) {
        cin >> second[i];
    }

    for (int i = 0; i < n-2; i++) {
        cin >> third[i];
    }

    sort(first, first + n);
    sort(second, second + n - 1);
    sort(third, third + n - 2);

    for (int i = 0; i < n; i++) {
        if (first[i] != second[i]) {
            cout << first[i] << endl;
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        if (second[i] != third[i]) {
            cout << second[i] << endl;
            break;
        }
    }
}
