#include <iostream>
#include <cmath>
using namespace std;


int isCube(long long number) {
    long long left, right;
    left = 1;
    right = number;
    long long middle;
    

    while (left <= right) {
        middle = (left + right) / 2;
        long long cubed = middle * middle * middle;
        if (cubed == number) {
            return 1;
        } else if (cubed < number) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }

    }
    return 0;
}

int isCubed(long long number) {
    long long temp = pow(number, 1./3.);

    while (temp * temp * temp > number) {
        temp--;
    }

    while (temp * temp * temp < number) {
        temp++;
    }

    if (temp * temp * temp == number) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x;

        cin >> x;
        int success = 0;


        for (long long i = 1; i * i * i < x; i++) {
            long long remainder = x - i * i * i;
            if (isCubed(remainder)) {
                success = 1;
                break;
            }
        }
        if (success) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
