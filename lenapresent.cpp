#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;

    int spaces = size * 2;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < (size - i); j++) {
            cout << "  ";
        }

        for (int j = 0; j < 2 * i; j++) {
            if (j <= i) {
                cout << j << " ";
            } else {
                cout << i - (j % i) << " ";
            }
        }

        cout << 0 << endl;
    }
    
    for (int i = 0; i < size * 2; i++) {
        if (i <= size) {
            cout << i << " ";
        } else {
            cout << size - ( i % size) << " ";
        }
    }
    cout << 0 << endl;

    for (int i = size - 1; i >= 0; i--) {
        for (int j = 0; j < (size - i); j++) {
            cout << "  ";
        }

        for (int j = 0; j < 2 * i; j++) {
            if (j <=i) {
                cout << j << " ";
            } else {
                cout << i - (j % i) << " ";
            }
        }

        cout << 0 << endl;
    }
}
