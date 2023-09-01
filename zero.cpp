#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int testcases;
    cin >> testcases;

    while (testcases--) {
        long long x, y, a, b;

        cin >> x >> y >> a >> b;
        long long cost_plan_a;
        
        cost_plan_a = (abs(x) + abs(y)) * a;

        long long cost_plan_b = 0;

        if (abs(x) < abs(y)) {
            cost_plan_b += abs(x) * b;
            y = y - x;
            cost_plan_b += abs(y) * a;
        } else {
            cost_plan_b += abs(y) * b;
            x = x - y;
            cost_plan_b += abs(x) * a;
        }

                
        
        
        if (cost_plan_a < cost_plan_b) {
            cout << cost_plan_a;
        } else {
            cout << cost_plan_b;
        }
        cout << endl;
    }
    return 0;
}



