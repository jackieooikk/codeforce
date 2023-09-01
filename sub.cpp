#include <iostream>
using namespace std;

int main() {
    int number, times;
    cin >> number >> times;

    for (int i = 0; i < times; i++) {
        if (number % 10 == 0) {
            number /= 10;
        } else {
            number -= 1;
        }
    }
    cout << number << endl;
    return 0;
}
