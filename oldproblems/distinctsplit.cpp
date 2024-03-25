#include <iostream>
#include <string>
using namespace std;

int f(string s) {
    sort(s.begin(), s.end());
    if (s.size() == 0) {
        return 0;
    }
    long score = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != s[i-1]) {
            score++;
        }
    }

    return score;
}

int main() {
    long testcases;

    cin >> testcases;


    while (testcases--) {
        long n;

        cin >> n;
        string s;
        cin >> s;
        

        int left[26] = { 0 };
        int right[26] = {0};

        for (int i = 0; i < n; i++) {
           right[s[i] - 'a']++;
        }

        long score = 0;

        for (int i = 0; i < 26; i++) {
            if (right[i] > 0) {
                score++;
            }
        }
        
        long high_score = score;

        for (int i = 0; i < n; i++) {
            right[s[i] - 'a']--;
            left[s[i] - 'a']++;
            
            if (right[s[i] - 'a'] == 0) {
                score--;
            }

            if (left[s[i] - 'a'] == 1) {
                score++;
            }

            if (score > high_score) {
                high_score = score;
            }
        }

        cout << high_score << endl;


    }
}

