#include <iostream>
using namespace std;

int main() {
    int stops, current, min_max, in, out;

    cin >> stops;

    min_max = 0;
    current = 0;

    for (int i = 0; i < stops; i++) {
        cin >> out >> in;
        
        current = current + in - out;
        
        if (current > min_max) {
            min_max = current;
        }
    }

    cout << min_max << endl;
    return 0;
}
        
