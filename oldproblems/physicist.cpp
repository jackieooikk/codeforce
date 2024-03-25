#include <iostream>
using namespace std;

int main() {
    int x,y,z,x_force,y_force,z_force;
    long long time;
    cin >> time;

    x = 0;
    y = 0;
    z = 0;

    while (time--) {
        cin >> x_force >> y_force >> z_force;
        x += x_force;
        y += y_force;
        z += z_force;
    }

    if (x == 0 && y == 0 && z == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
