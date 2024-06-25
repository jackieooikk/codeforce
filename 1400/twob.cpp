#include <iostream>
#include <vector>
#include <cmath>
#define ll long long

using namespace std;



/**
two buttons
red *= 2
blue -=1
*/
int main() {
    ll first, second;
    cin >> first >> second;

    if (first > second) {
        cout << first - second << endl;
    } else {
        ll count = 0;
        while (first < second) {
            first *= 2;
            count++;
        }
                
        ll diff = first - second;
        ll multiple = count;
        while (multiple >= 0 && diff > 0) {
            ll sub = pow(2, multiple);
            while (diff >= sub) {
                diff -= sub;
                count++;
            }
            multiple--;
        }
        

        cout << count << endl;
    }
}

