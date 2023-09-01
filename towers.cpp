#include <iostream>

using namespace std;

int main() {
    long n;
    cin >> n;

    long long blocks[n];

    for (int i = 0; i < n; i++) {
        cin >> blocks[i];
    }

    sort(blocks, blocks + n);
    
    long long current_height, previous, highest, unique_towers;
    unique_towers = 1;

    previous = blocks[0];
    current_height = 1;
    highest = 1;

    for (int i = 1; i < n; i++) {
        if (blocks[i] == previous) {
            current_height++;
            highest = (current_height > highest) ? current_height : highest;
        } else {
            unique_towers++;
            current_height = 1;
            previous = blocks[i];
        }
    }

    cout << highest << " " << unique_towers << endl;
}

