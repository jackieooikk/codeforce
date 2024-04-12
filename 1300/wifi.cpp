#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int fact(int a, int b) {
    int ans = 1;
    while (a > b) {
        ans *= a;
        a--;
    }
    return ans;
}

int nCr(int n, int r) {
    int ans = (fact(n, n - r) / fact(r, 0));
    return ans;
}


int main() {
    string a, b;

    cin >> a >> b;

    float anet = 0;
    float bnet = 0;

    int bmark = 0;

    for (int i = 0; i < a.length(); i++) {
        if (a[i] == '+') {
            anet += 1;
        } else {
            anet -= 1;
        }

        if (b[i] == '+') {
            bnet += 1;
        } else if (b[i] == '-') {
            bnet -=1;
        } else {
            bmark += 1;
        }
    }

    float ans = 0;

    if (anet == bnet && bmark == 0) {
        ans = 1;
        cout << ans << endl;
    } else if (bmark < abs(anet - bnet)) {
        cout << ans << endl;
    } else {
        float comb = pow(2, bmark);
        int diff = abs(anet - bnet);
        int pos = diff + (bmark - diff) / 2;;
        
        int upper = nCr(bmark, pos);
        ans = upper / comb;
        cout << setprecision(15) << ans << endl;
    }

    return 0;
}
        

        
            

