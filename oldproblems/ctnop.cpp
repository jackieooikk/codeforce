#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        char chars[n];
        for (int i = 0; i < n; i++) {
            cin >> chars[i];
        }
        //sort(chars, chars + n);
        
        long lowerCase[26] = {};
        long upperCase[26] = {};

        for (int i = 0; i < n; i++) {
            if (chars[i] - 65 < 26) {
                upperCase[chars[i] - 65]++;
            } else {
                lowerCase[chars[i] - 97]++;
            }
        }
        
        long pairs = 0;
        long doubles = 0;

        for (int i = 0; i < 26; i++) {
            doubles += (abs(lowerCase[i] - upperCase[i])) / 2;
            pairs += (lowerCase[i] + upperCase[i] - (abs(lowerCase[i] - upperCase[i]))) / 2;
        }

        pairs += (doubles < k) ? doubles : k;

        cout << pairs << endl;
    }
}





