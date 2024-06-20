#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> nums(n);
        vector<int> sortedNums(n);

        for (int i = 0; i < n; i++) {
            cin >> nums[i];
            sortedNums[i] = nums[i];
        }

        sort(sortedNums.begin(), sortedNums.end());


        int min = sortedNums[0];
        int valid = 1;

        for (int i = 0; i < n; i++) {
           if (sortedNums[i] != nums[i] && nums[i] % min != 0) {
               valid = 0;
               break;
           }
        }

        if (valid) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }

}

