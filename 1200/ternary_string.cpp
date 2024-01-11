#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int one;
        int two;
        int three;

        one = -1;
        two = -1;
        three = -1;

        int smallest = s.size();

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                one = i;
            } else if (s[i] == '2') {
                two = i;
            } else {
                three = i;
            }
            
            if (one != -1 && two != -1 && three != -1) {
                int high, low;

                if (one > two && one > three) {
                    high = one;
                } else if (two > one && two > three) {
                    high = two;
                } else {
                    high = three;
                }

                if (one < two && one < three) {
                    low = one;
                } else if (two < three && two < one) {
                    low = two;
                } else {
                    low = three;
                }

                smallest = (smallest < high - low) ? smallest : high - low;
            }
        }
        if (smallest == s.size()) {
            cout << 0 << endl;
        } else {
            cout << smallest + 1<< endl;
        }
    }
}
