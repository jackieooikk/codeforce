#include <iostream>
using namespace std;

long calculate_max() {
    long n, total, max, number;
    max = 0;
    total = 0;
    cin >> n;
    
    while (n--) {
        cin >> number;
        total += number;
        if (total > max) {
            max = total;
        }
    }
    return max;
}

int main() {
    long t;
    cin >> t;
    while (t--) {
        long blue_max = calculate_max();
        long red_max = calculate_max();

        cout << blue_max + red_max << endl;
    }
}
