#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        string s;
        cin >> s;
        int found = 0;


        for (int i = s.size() - 2; i >= 0; i--) {
            int one, two;

            one = s[i] - '0';
            two = s[i+1] - '0';

            int sum = one + two;

            if (sum >= 10) {
               s[i] = '0' + sum / 10;
               s[i+1] = '0' + sum % 10;
               found = 1;
               break;
            }
        }
        
        if (found) {
            cout << s << endl;
        } else {
            int one, two;
            one = s[0] - '0';
            two = s[1] - '0';
            int sum = one + two;

            s[1] = '0' + sum;

            cout << s.substr(1, s.size()) << endl;
        }
    }
}

