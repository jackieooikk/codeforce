#include <iostream>
using namespace std;

int sumofnumber(long long number) {
    int total = 0;
    while (number > 0) {
        total += number % 10;
        number /= 10;
        if (total > 10) {
            return 0;
        }
    }
    if (total == 10) {
        return 1;
    } else {
        return 0;
    }
}


int main() {
    int k, count;

    cin >> k;

    count = 0;
    long long number = 0;
    
    while (count < k) {
        number++;
        if (sumofnumber(number)) {
            count++;
        }
    }

    cout << number << endl;
}
