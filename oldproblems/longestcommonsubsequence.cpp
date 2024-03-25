#include <iostream>

using namespace std;

int main() {
    string first, second;

    cin >> first >> second;

    
    if (first.size() > second.size()) {
        cout << first.size() << endl;
    } else if (second.size() > first.size()) {
        cout << second.size() << endl;
    } else {
        int same = 1;
        for (int i = 0; i < first.size(); i++) {
            if (first[i] != second[i]) {
                same = 0;
            }
        }

        if (!same) {
            cout << first.size() << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
