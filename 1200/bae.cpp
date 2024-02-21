#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, time;

    cin >> n >> time;

    vector<int> ans(n);
    vector<int> max(n);

    int available = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> ans[i];
        cin >> max[i];

        time -= ans[i];
        
        available += max[i] - ans[i];
    }

    if (time > available || time < 0) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        for (int i = 0; i < n; i++) {
            if (time < 0) {
                cout << ans[i] << " ";
            } else if (time > max[i] - ans[i]) {
                cout << max[i] << " ";
                time -= (max[i] - ans[i]);
            } else {
                cout << ans[i] + time << " ";
                time = 0;
            }
        }
        cout << endl;
    }
}


    

