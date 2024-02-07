#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int b, g;
    cin >> b;

    int boys[b];

    for (int i = 0; i < b; i++) {
        cin >> boys[i];
    }

    cin >> g;
    int girls[g];

    for (int i = 0; i < g; i++) {
        cin >> girls[i];
    }

    sort(boys, boys + b);
    sort(girls, girls + g);

    int i, j;
    i = 0;
    j = 0;

    int pair = 0;

    while (i < b && j < g) {
        if (abs(boys[i] - girls[j]) < 2) {
            pair++;
            i++;
            j++;
        } else if (boys[i] > girls[j]) {
            j++;
        } else {
            i++;
        }
    }

    cout << pair << endl;
}
