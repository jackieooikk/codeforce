#include <iostream>
#include <cstring>

using namespace std;

const int MAX_LENGTH = 101;

int main() {
    char first[MAX_LENGTH];
    char second[MAX_LENGTH];

    char letter1, letter2;

    cin >> first >> second;
    
    int i = 0;

    while (first[i] != '\0') {
        letter1 = tolower(first[i]);
        letter2 = tolower(second[i]);
        if (letter1 > letter2) {
            cout << 1 << endl;
            return 0;
        } else if (letter1 < letter2) {
            cout << -1 << endl;
            return 0;
        }
        i++;
    }

    cout << 0 << endl;

    return 0;
}

