#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    char c;
    int digit;
    
    int ticker = 0;    

    for (int i = 0; i < s.length(); i++) {    
        c = s[i];
        digit = c - '0';

        if (!ticker && digit == 9) {
            ticker = 1;
            continue;
        } else {
            ticker = 1;
        }

        if (digit > 4) {
            digit = 9 - digit;
            c = '0' + digit;
            s[i] = c;
        }
    }

    cout << s << endl;    
}
