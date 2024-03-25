#include <iostream>
using namespace std;

int main() {
    long long n, presses, buttons_unlocked;

    cin >> n;
    presses = 0;
    buttons_unlocked = 0;
    while (n > 0) {
        presses += n;
        presses += buttons_unlocked * (n - 1);
        buttons_unlocked++;
        n--;
    }
    cout << presses << endl;
}
