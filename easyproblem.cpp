#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;

    while (cases--) {
        int verdict;
        cin >> verdict;
        if (verdict == 1) {
            cout << "HARD\n";
            return 0;
        }
    }

    cout << "EASY\n";
}


