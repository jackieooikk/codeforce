#include <iostream>

using namespace std;

int main() {
    int distance;

    cin >> distance;

    int moves = distance/5;

    if (distance % 5 != 0) {
        moves++;
    }

    cout << moves << endl;
    return 0;

    }
    
