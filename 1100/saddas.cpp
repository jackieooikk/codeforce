#include <iostream>
#include <cmath>
using namespace std;

int lucky(long long num) {
    while (num > 0) {
        long long digit = num % 10;

        if (digit != 4 && digit != 7) {
            return 0;
        }
        num /= 10;
    }
    return 1;
}

int main() {
    long long n;
    cin >> n;
    
    int answer = 1;
    int i = 0;
    while (n > 0) {
        if (i > 0) {
            answer += pow(2, i);
        }
        int power = pow(2, i);
        int digit = n % 10;

        if (digit == 7) {
            answer += power;
        }
        n/=10;
        i++;
    }
    cout << answer << endl;


}
