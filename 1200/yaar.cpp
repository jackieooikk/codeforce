#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;


    while (t--) {
        int n, x, y, diff;

        cin >> n >> x >> y;

        diff = y - x;

        int a = n;

        while (diff % (a-1) != 0) {
            a--;
        }

        int inc = diff / (a-1);
        int dum = 0;

        for (int i = 0 ; i < n; i++) {
            int b;
            if (!dum) {
                b = y - inc * i;
                if (b <= inc) {
                    dum = i;
                }
            } else {
                b = y + (i - dum) * inc;
            }

            cout << b << " ";
        }

        cout << endl;
    }
}
            
