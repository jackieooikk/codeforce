#include<iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> rotations(n);
    for (int i = 0; i < n; i++) {
        cin >> rotations[i];
    }
    
    for (int i = 0; i < (1 << n); i++) {

        int totalRotation = 0;

        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                totalRotation += rotations[j];
            } else {
                totalRotation -= rotations[j];
            }
        }

        if (totalRotation % 360 == 0) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
    return 0;
}
