#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int line[n];
    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> line[i];
        total += line[i];
    }
    
    if (total == n) {
        cout << total - 1 << endl;
        return 0;
    }

    int final_change = 0;

    for (int i = 0; i < n; i++) {
        int change = 0;
        int max_change = 0;
        for (int j = i; j < n; j++) {
            if (line[j] == 0) {
                change++;
            } else {
                change--;
            }

            max_change = (change > max_change) ? change : max_change;
        }

        final_change = (max_change > final_change) ? max_change : final_change;
    }

    cout << final_change + total << endl;
}
