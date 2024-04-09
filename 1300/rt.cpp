#include <iostream>

using namespace std;



long long nCr(long long n) {
    if (2 > n) {
        return 0;
    }
    return (n * (n - 1)) / 2;
}



int main() {
    long long m, n;
    long long min, max;

    cin >> m >> n;

    min = 0;
    max = 0;

    long long div = m / n;
    long long rem = m - div * n;

    min += rem * nCr(div + 1);
    min += (n - rem) * nCr(div);


    max += nCr(m - n + 1);

    cout << min << " " << max << endl;
}
