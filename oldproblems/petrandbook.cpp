#include <iostream>
using namespace std;

int main() {
    long pages;
    long reads_per_day[7];

    cin >> pages;

    for (int i = 0; i < 7; i++) {
        cin >> reads_per_day[i];
    }
    int j = 0;
    while (pages > 0) {
        pages -= reads_per_day[j];
        j = (j + 1) % 7;
    }

    if (j == 0) {
        cout << 7 << endl;
    } else {
        cout << j << endl;
    }   
}
