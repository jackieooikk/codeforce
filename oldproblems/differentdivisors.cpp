#include <iostream>
using namespace std;

int is_prime(long n) {
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }
    } 
    return 1;
}

int main() {
    long t;
    cin >> t;

    while (t--) {
        long d;
        
        cin >> d;

        long first = d + 1;

        while (!is_prime(first)) {
            first++;
        }

        long second = first + d;

        while (!is_prime(second)) {
            second++;
        }

        cout << first * second << endl;
    }
}
