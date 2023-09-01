#include <iostream>

using namespace std;

int main() {
    long t;
    cin >> t;

    while (t--) {
        string a;
        long long max;

        cin >> a >> max;

        long values[a.size()];
        for (int i = 0; i < a.size(); i++) {
            values[i] = a[i] - 'a' + 1;
        }

        sort(values, values + a.size());

        long long count, letter_count;
        count = 0;
        int index = 0;

        while (count + values[index] <= max && index < a.size()) {
            count += values[index];
            if (index != 0 && values[index] == values[index - 1]) {
                letter_count++;
            } else {
                letter_count = 1;
            }
            index++;
        }

        if (index == 0) {
            cout << endl;
            continue;
        } else if (index == a.size()) {
            cout << a << endl;
            continue;
        }
        
        index--;

        for (int i = 0; i < a.size(); i++) {
            if (a[i] - 'a' + 1 < values[index]) {
                cout << a[i];
            } else if (a[i] - 'a' + 1 == values[index] && letter_count > 0) {
                cout << a[i];
                letter_count--;
            }
        }

        cout << endl;
    }
}



            
