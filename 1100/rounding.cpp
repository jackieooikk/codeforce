#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string number;
        cin >> number;

        int found = 0;

        for (int i = 0; i < number.size(); i++) {
            int x = number[i] - '0';

            if (!found) {
                if (x >= 5) {
                    found = 1;

                    i--;
                    while (i >= 0 && number[i] == '4') {
                        i--;
                    }
                
                    if (i < 0) {
                        cout << 1;
                    } else {
                        number[i]++;
                    }
                }
            } else {
                number[i] = '0';
            }
        }

        cout << number << endl;
    }
}

