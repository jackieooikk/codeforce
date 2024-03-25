#include <iostream>

using namespace std;

int main() {
    int n, k, number, number2;
    cin >> n >> k;

    int sum = 0;

    for (int i = 0; i < k; i++) {
        cin >> number;
        if (number != 0) {
            sum++;
        }
    }

    for (int i = k; i < n; i++) {
        cin >> number2;
        if (number2 != 0 && number2 == number) {
            sum++;
        }
    }
    cout << sum << endl;
    
    return 0;
}
