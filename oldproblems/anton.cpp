#include <iostream>
using namespace std;

int main() {
    int matches;
    string results;
   
    int anton_wins = 0;
    int danik_wins = 0;

    cin >> matches >> results;

    for (int i = 0; i < matches; i++) {
        if (results[i] == 'A') {
            anton_wins++;
        } else {
            danik_wins++;
        }
    }

    if (anton_wins == danik_wins) {
        cout << "Friendship" << endl;
    } else if (anton_wins > danik_wins) {
        cout << "Anton" << endl;
    } else {
        cout << "Danik" << endl;
    }

    return 0;
}
