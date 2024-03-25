#include <iostream>
using namespace std;



long long digit(long long no) {
    long long cnt = 0;
    while (no) {
        ++ cnt;
        no /= 10;
    }
    return cnt;
}

long long call(long long pow, long long cnt) {
    long long no = pow;
    while (digit(no) < cnt) {
        no *= pow;
    }
    return no;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        long long des_a = a - c + 1;
        long long des_b = b - c + 1;

        cout << call(2, des_a) << string(c-1,'0') << " " << call(3, des_b) << string(c-1,'0') << endl;
    }
}
