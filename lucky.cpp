#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long maybe_lucky;
    cin >> maybe_lucky;

    int num_digits = log10(maybe_lucky) + 1;
    
    long long num, to_mod, to_divide;
    long count = 0;
    
    for(int i = 0; i < num_digits; i++) {
        to_mod = pow(10, i+1);
        to_divide = pow(10, i);
        num = maybe_lucky % to_mod / to_divide;
        if (num == 4 || num == 7) {
            count++;
        }
    }
    
    if (count == 4 || count == 7) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
