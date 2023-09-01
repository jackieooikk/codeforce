#include <iostream>

using namespace std;

int main() {

    int bear, brother;

    cin >> bear >> brother;

    int i = 0;

    while (bear <= brother) {
        bear *= 3;
        brother *= 2;
        i++;
    }

    cout << i << endl;
    return 0;
}
