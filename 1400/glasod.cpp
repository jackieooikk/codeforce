#include<iostream>
#include<cmath>
using namespace std;

int main() {
    
    long long m, s, min, max, minS, maxS, minM, maxM;
    cin >> m >> s;

    min = 0;
    max = 0;

    minS = s;
    maxS = s;

    minM = m;
    maxM = m;

    if (9 * m < s || s == 0) {
        if (m == 1 && s == 0) {
            cout << "0 0" << endl;
        } else {
            cout << "-1 -1" << endl;
        }
        return 0;
    }
    
    while (minM--) {
        if (minS > minM * 9) {
            cout << ((minS - 1) % 9) + 1;
            minS -= ((minS - 1) % 9) + 1;
        } else if (minM == m - 1) {
            cout << 1;
            minS -= 1;
        } else {
            cout << 0;
        }

    }

    cout << " ";



    while (maxM--) {
       if (maxS > 8) {
           maxS -= 9;
           cout << "9";
       } else if (maxS > 0) {
           cout << maxS;
           maxS = 0;
       } else {
           cout << "0";
       }
    }
    cout << endl;

}
