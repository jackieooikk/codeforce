#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector < pair<long long, long long> > line(n);
        long long d;

        for (long long i = 0; i < n; i++) {
            cin >> d;
            line[i].first = d;
            line[i].second = i + 1;
        }

        sort(line.begin(), line.end());
        


        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (line[i].first * line[j].first > 2 * n) {
                    break;
                }
                if (line[i].first * line[j].first == line[i].second + line[j].second) {
                    count++;
                }
            }
        }

        cout << count << endl;
    }
}
