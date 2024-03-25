#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;

        long s = a.size();
        
        int repeating = 0;
        for (int i = 0; i < b.size(); i++) {
            if (b[i] == 'a') {
                repeating = 1;
            }
        }

        if (repeating) {
            if (b.size() == 1) {
                cout << 1 << endl;
            } else {
                cout << -1 << endl;
            }
        } else {
            long long total =  pow(2, s);
            cout << total << endl;
        }
    }
}


