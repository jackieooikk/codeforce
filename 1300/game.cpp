#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int turn = 0;
    
    sort (s.begin(), s.end());

    int count = 1;
    int use = 0;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i-1]) {
            count++;
        } else {
            if (count % 2 == 1) {
                if (!use) {
                    use++;
                } else {
                    turn = 1 - turn;
                }
            }
            count = 1;
        }
    }

    if (count % 2 == 1) {
        if (use) {
            turn = 1 - turn;
        }
    }



    if (turn == 0) {
        cout << "First\n";
    } else {
        cout << "Second\n";
    }
}

