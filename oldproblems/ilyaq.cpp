#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    long t;
    cin >> t;


    long line[s.size()];
    
    long count = 0;
    line[0] = count;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
        }
        line[i] = count;
    }

    while (t--) {
        long i, j;

        cin >> i >> j;


        cout << line[j - 1] - line[i - 1] << endl;
    }
}
