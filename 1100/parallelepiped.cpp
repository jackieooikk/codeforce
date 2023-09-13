#include <iostream>
using namespace std;

int main() {
    int one, two, three;
    cin >> one >> two >> three;

    int a, b, c;

    for (int i = 1; i <= one; i++) {
        if (one % i == 0) {
            a = i;
            b = one / i;

            if (two % a == 0 && three % b == 0) {
                if (two / a == three / b) {
                    c = two / a;
                    break;
                }
            }

        }
    }
    cout << (a + b + c) * 4 << endl;
}

