#include <iostream>

using namespace std;

int main() {
    
    int n;
    char bit[4];

    cin >> n;

    int x = 0;

    for (int i = 0; i < n; i++) {
        cin >> bit;

        if (bit[1] == '+') {
            x++;
        } else {
            x--;
        }
    }

    cout << x << endl;
    
    return 0;
}
