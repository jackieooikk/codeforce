#include <iostream>

using namespace std;
int MAX_CHAR = 101;

int main() {
    
    string summation;

    int one = 0;
    int two = 0;
    int three = 0;

    cin >> summation;

    for (int i = 0; i < summation.size(); i = i + 2) {
        if (summation[i] == '1') {
            one++;
        } else if (summation[i] == '2') {
            two++;
        } else {
            three++;
        }
    }

    int j = 0;

    for (int i = 0; i < one; i++) {
        summation[j] = '1';
        j += 2;
    }

    for (int i = 0; i < two; i++) {
        summation[j] = '2';
        j += 2;
    }

    for (int i = 0; i < three; i++) {
        summation[j] = '3';
        j += 2;
    }

    cout << summation << endl;
    
    return 0;
    
}
