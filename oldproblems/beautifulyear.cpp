#include <iostream>

using namespace std;

int main() {
    long year;

    cin >> year;

    while (year++) {
        int one, two, three, four;

        one = year/1000;
        two = (year/100) % 10;
        three = (year/10) % 10;
        four = year % 10;

        if (one != two && one != three && one != four && two != three && three != four && two != four) {
            cout << year << endl;
            return 0;
        }

    }
}


