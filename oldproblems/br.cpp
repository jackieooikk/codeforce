#include <iostream>
using namespace std;

int main() {
    long testcases;
    cin >> testcases;

    while (testcases--) {
        long length, zero, one, two;
        cin >> length;

        zero = 0;
        one = 0;
        two = 0;

        for (int i = 0; i < length; i++) {
            long number;
            cin >> number;

            if (number % 3 == 0) {
                zero++;
            } else if (number % 3 == 1) {
                one++;
            } else {
                two++;
            }

        }

        long moves = 0;

        while (zero != length/3 || one != length/3) {
            if (zero > length/3) {
                one += zero - length/3;
                moves += zero - length/3;
                zero = length/3;
            }

            if (one > length/3) {
                two += one - length/3;
                moves += one - length/3;
                one = length/3;
            }
            
            if (two > length/3) {
                zero += two - length/3;
                moves += two - length/3;
                two = length/3;
            }
        }
        cout << moves <<endl ;
    }
}



