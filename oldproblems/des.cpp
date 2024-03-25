#include <iostream>

using namespace std;

int main() {
    long testcases;
    cin >> testcases;

    while (testcases--) {
        string a, b;
        cin >> a >> b;
        long all = a.size() + b.size();
        long min = all;
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < b.size(); j++) {
                if (a[i] == b[j]) {
                    long n = 1;
                    while (a[i + n] == b[j + n] && i + n < a.size() && j + n < b.size()) { 
                        n++;
                    }
                    if (all - 2 * n < min) {
                        min = all - 2 * n;
                    }
                }
            }
        }
        cout << min << endl;
    }
}
