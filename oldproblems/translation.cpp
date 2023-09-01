#include <iostream>
using namespace std;

int main() {
    string first, second;

    cin >> first >> second;
    int yes = 1;
    for (int i = 0; i < first.size(); i++) {
        if (first[i] != second[first.size() - 1 - i]) {
            yes = 0;
        }
    }

    if (yes) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;

}
