#include <iostream>
#include <vector>


using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int countGroup = 0;
        int groups = 0;

        for (int i = 0; i < n; i++) {
            countGroup++;

            if (countGroup == a[i]) {
                countGroup = 0;
                groups++;
            }
        }

        cout << groups << endl;
    }
}


