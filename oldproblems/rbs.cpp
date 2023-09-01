#include <iostream>
using namespace std;

int main() {
    long testcases;
    cin >> testcases;


    while (testcases--) {

        string line;
        cin >> line;
        
        long open, close, questionopen, questionclose, question;
        open = 0;
        close = 0;
        question = 0;
        questionopen = 0;
        questionclose = 0;
        int valid = 1;

        for (int i = 0; i < line.size(); i++) {
            if (line[i] == '(') {
                open++;
            } else if (line[i] == ')') {
                close++;
                if (questionclose + close > questionopen + open) {
                    if (questionclose > 0) {
                        questionclose--;
                        questionopen++;
                    } else {
                        valid = 0;
                    }
                }
            } else {
                if (questionclose + close == questionopen + open) {
                    questionopen++;
                } else if (questionopen + open > questionclose + close) {
                    questionclose++;
                }
            }

        }

        if (!valid || open + questionopen != close + questionclose) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}


