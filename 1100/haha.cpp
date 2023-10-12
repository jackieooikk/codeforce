#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int one = 0;
        int zero = 0;

        int n;
        cin >> n;
        
        int dummy;
        for (int i = 0; i < n;i++) {
            cin >> dummy;
            if (dummy == 1) {
                one++;
            } else {
                zero++;
            }

        }

        if (zero >= one) {
            cout << zero << endl;
            for (int i = 0; i < zero; i++) {
                cout << 0 << " ";
            }
            cout << endl;
        } else {
            cout << one - (one % 2) << endl;
            for (int i = 0; i < one - (one % 2); i++) {
                cout << 1 << " ";
            }
            cout << endl;
        }
    }
}
