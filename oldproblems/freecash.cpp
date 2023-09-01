#include <iostream>

using namespace std;

int main() {
    long customers;
    cin >> customers;


    int previous_hour, previous_minute, n_cash;

    cin >> previous_hour >> previous_minute;


    long n_cash_needed, streak;

    n_cash_needed = 1;
    streak = 1;
    for (int i = 1; i < customers; i++) {
        int current_hour, current_minute;

        cin >> current_hour >> current_minute;

        if (current_hour == previous_hour && current_minute == previous_minute) {
            streak++;
            if (streak > n_cash_needed) {
                n_cash_needed = streak;
            }
        } else {
            streak = 1;
            previous_hour = current_hour;
            previous_minute = current_minute;
        }
    }

    cout << n_cash_needed << endl;
}
