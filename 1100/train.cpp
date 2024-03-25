#include <iostream>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, cases;
        cin >> n >> cases;

        map<int, int> start;
        map<int, int> finish;

        int dummy;

        for (int i = 0; i < n; i++) {
            cin >> dummy;
            int loc = i + 1;
            if (start[dummy] == 0) {
                start[dummy] = loc;
                finish[dummy] = loc;
            } else {
                finish[dummy] = loc;
            }
        }

        while (cases--) {
            int s, f;
            cin >> s >> f;
            
            if (start[s] == 0 || start[f] == 0) {
                cout << "NO\n";
            } else {
                if (start[s] < finish[f]) {
                    cout << "YES\n";
                } else {
                    cout << "NO\n";
                }
            }

           
        }
    }
}

