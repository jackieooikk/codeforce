#include <iostream>

using namespace std;


int main() {
    string initial;

    cin >> initial;

    if (initial.size() == 1) {
        cout << 0 << endl;
        return 0;
    }


    int  digit;
    
    for (int i = 0; i < initial.size(); i++) {
        digit += initial[i] - '0';
    }
    int sum;
    int times = 1;
    while (digit > 9) {
        sum = 0;

        while (digit > 0) {
            sum += digit % 10;
            digit /= 10;
        }

        digit = sum;
        times++;
    }
    
    cout << times << endl;
}


