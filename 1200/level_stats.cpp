#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int p, c;
        
        int current_p = 0;
        int current_c = 0;


        string s = "YES";

        while (n--) {
            cin >> p >> c;

            if (c > p || current_p > p || current_c > c) {
                s = "NO";
            }

            if (c - current_c > p - current_p) {
                s = "NO";
            }
            
            current_c = c;
            current_p = p;
        }
        cout << s << endl;
    }
}


