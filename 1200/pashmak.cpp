#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x1, x2, y1, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    int x3, x4, y3, y4;

    if (x1 == x2) {
        y3 = y1;
        y4 = y2;
        x3 = x1 + (y2 - y1);
        x4 = x1 + (y2 - y1);
    } else if (y1 == y2) {
        x3 = x1;
        x4 = x2;
        y3 = y1 + (x2 - x1);
        y4 = y1 + (x2 - x1);
    } else if (abs(x1 - x2) == abs(y1 - y2)) {
        x3 = x1;
        x4 = x2;
        y3 = y2;
        y4 = y1;
    } else {
        cout << -1 << endl;
        return 0;
    }

    cout << x3 << " " <<  y3 << " " << x4 << " " <<  y4 << endl;
}
