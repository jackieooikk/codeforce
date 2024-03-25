#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        vector<int> even, odd;
        int dummy;

        for (int i = 0; i < 2 * n; i++) {
            cin >> dummy;
            if (dummy % 2 == 0) {
                even.push_back(i);
            } else {
                odd.push_back(i);
            }
        }

        vector< pair<int, int> > ans;

        for (int i = 0; i + 1< even.size(); i += 2) {
            ans.push_back(make_pair(even[i], even[i+1]));
        }

        for (int i = 0; i + 1 < odd.size(); i += 2) {
            ans.push_back(make_pair(odd[i], odd[i+1]));
        }

        for (int i = 0; i < n - 1; i++) {
            cout << ans[i].first + 1 << " " << ans[i].second + 1<< endl;
        }

    }
}
    




        


















