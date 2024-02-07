#include <iostream>

using namespace std;


int binary_search(int n, int* piles, int find) {
    int left, right, middle;
    left = 0;
    right = n;
    
    while (left < right) {
        middle = (left + right) / 2;
        
        if (piles[middle] == find) {
            return middle;
        } else if (piles[middle] < find) {
            left = middle + 1;
        } else {
            right = middle;
        }
    }

    return left;
}


int main() {
    int n;

    cin >> n;

    int piles[n];
    
    for (int i = 0; i < n; i++) {
        cin >> piles[i];
    }

    for (int i = 1; i < n; i++) {
        piles[i] = piles[i-1] + piles[i];
    }

    int finds;

    cin >> finds;
    int find;
    for (int i = 0; i < finds; i++) {
        cin >> find;

        cout << binary_search(n, piles, find) + 1<< endl;
    }

    return 0;
}



