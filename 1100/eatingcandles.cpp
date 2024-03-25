#include <iostream>
#include <vector>
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        


        vector <ll> line;
        ll dummy;
        for (ll i = 0; i < n; i++) {
            cin >> dummy;
            line.push_back(dummy);
        }
        
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        ll left, right;
        left = 0;
        right = n - 1;
        
        ll totalLeft, totalRight;
        totalLeft = line[left];
        totalRight = line[right];

        ll max = 0;

        if (totalLeft == totalRight) {
            max = 2;
        }

        while (left != right - 1) {
            if (totalLeft < totalRight) {
                left++;
                totalLeft += line[left];
            } else {
                right--;
                totalRight += line[right];
            }


            if (totalLeft == totalRight) {
                max = left + 1 + (n - right);
            }
        }

        cout << max << endl;
    }
    return 0;
}
