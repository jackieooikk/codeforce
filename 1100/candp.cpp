#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int energy, height, previous_height, pay;

    pay = 0;
    energy = 0;
    previous_height = 0;

    for (int i = 0; i < n; i++) {
        cin >> height;

        energy += previous_height - height;

        if (energy < 0) {
            pay += energy * -1;
            energy = 0;
        }

        previous_height = height;
    }

    cout << pay << endl;
}
