#include <iostream>
#include <vector>
using namespace std;


int main() {
    long long n, k;

    cin >> n >> k;

    string s;

    vector<char> alphabet(k);

    cin >> s;
    for (int i = 0 ; i < k; i++) {
        cin >> alphabet[i];
    }

    long long l = 0;
    long long total = 0;

    for (long long i = 0; i < s.length(); i++) {
        int in = 0;
        for (int j = 0; j < k; j++) {
            if (s[i] == alphabet[j]) {
                in = 1;
            }
        }

        if (in) {
            l++;
        } else {
            total += (l * (l + 1)) / 2;
            l = 0;
        }
    }

    if (l) {
        total += (l * (l + 1)) / 2;
    }

    cout << total << endl;
}
