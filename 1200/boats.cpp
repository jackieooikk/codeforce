#include <iostream>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int line[n];

        for (int i = 0; i < n; i++) {
            cin >> line[i];
        }
         
        map<int, int> totals;
        bool data[500][500] = {};

        int max = 0;
        int sum;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                sum = line[i] + line[j];

                if (data[sum][i] || data[sum][j]) {
                    continue;
                }

                totals[sum]++;
                data[sum][i] = true;
                data[sum][j] = true;

                max = (totals[sum] > totals[max]) ? sum : max;               
            }
        }


        cout << totals[max] << endl;
    }
}
