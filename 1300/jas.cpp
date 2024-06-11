#include<iostream>
#include<vector>
using namespace std;

int main() {
    int x, y, n;
    cin >> x >> y >> n;

    vector<int> line(6);

    line[0] = x;
    line[1] = y;

    for (int i = 2; i < 6; i++) {
        line[i] = line[i-1] - line[i-2];
    }
    
    n = n - 1;
    n = n % 6;

    long long  ans = line[n];

    while (ans < 0) {
        ans = 1000000007 +  ans;
    }

    ans = ans % 1000000007;

    cout << ans << endl;

}

