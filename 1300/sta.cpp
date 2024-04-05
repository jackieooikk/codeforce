#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int line[n];
    
    for (int i = 0; i < n;i++) {
        cin >> line[i];
    }

    int state = 0;
    int valid = 1;
    int left, right;

    for (int i = 1; i < n; i++) {
        
        if (line[i] < line[i-1]) {
            if (state == 0) {
                left = i - 1;
                state++;
            }
        } else if (state == 1) {
            right = i - 1;
            state++;
        }

    }

    
    if (state == 0) {
        cout << "yes\n" << "1 1\n";
        return 0;
    }

    if (state == 1) {
        right = n - 1;
        state++;
    }


    if (state != 2) {
        cout << "no\n";
        return 0;
    } 

    if (left != 0 && line[left-1] > line[right]) {
        cout << "no\n";
        return 0;
    }

    if (right != n - 1 && line[right + 1] < line [left]) {
        cout << "no\n";
        return 0;
    }

    cout << "yes\n" << left + 1 << " " << right + 1 << endl;
}


