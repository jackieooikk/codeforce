#include <iostream>
#include <cstring>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string letters[n];
        set<string> s;
        for (int i = 0; i < n; i++) {
            cin >> letters[i];
            s.insert(letters[i]);
        }

        for (int i = 0; i < n; i++) {
            string primary = letters[i];

            int size = primary.size();

            int contains = 0;
            
            for (int j = 1; j < size; j++) {
                if (s.count(primary.substr(0,j)) == 1 && s.count(primary.substr(j, size)) == 1) {
                    contains = 1;
                    break;
                }
            }
            if (contains) {
                cout << 1;
            } else {
                cout << 0;
            }
        }
        cout << endl;

        
    }
}

