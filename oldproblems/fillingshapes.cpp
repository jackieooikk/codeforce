#include <iostream>
using namespace std;
#include <cmath>
int main() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        long long a = pow(2, n/2); 
        cout << a << endl;
    } else {
        cout << 0 << endl;
    }
}
