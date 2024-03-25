#include <iostream>
using namespace std;

int main() {
    long long strength, n;

    cin >> strength >> n;

    long long dragon_strength[n];
    long long strength_increase[n];

    for (int i = 0; i < n; i++) {
        cin >> dragon_strength[i] >> strength_increase[i];
    }

    for (int _ = 0; _ < n; _++) {
        int slain = 0;
        for (int i = 0; i < n; i++) {
            if (dragon_strength[i] != 0 && strength > dragon_strength[i]) {
                dragon_strength[i] = 0;
                strength += strength_increase[i];
                slain = 1;
                break;
            }
        }

        if (!slain) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";



    return 0;
}
    
