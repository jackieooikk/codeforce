#include <iostream>
#include <cmath>
using namespace std;

long long remove_zeros(long long number) {

    int digit, placement;

    placement = 0;
    long long no_zero_number = 0;

    while (number > 0) {
        digit = number % 10;
        no_zero_number += digit * pow(10, placement);
        if (digit != 0) {
            placement++;
        }
        number /= 10;
    }

    return no_zero_number;
}


int main() {

    long long one, two;

    cin >> one >> two;

    long long three = one + two;

    one = remove_zeros(one);
    two = remove_zeros(two);
    three = remove_zeros(three);

    if (three == one + two) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
