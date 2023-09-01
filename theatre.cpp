#include <iostream>

using namespace std;

int main() {
    long long n, m, a;

    cin >> n >> m >> a;

    long long n_length = n/a;
    long long m_length = m/a;

    if (n % a != 0) {
        n_length++;
    } 

    if (m % a != 0) {
        m_length++;
    }

    cout << n_length * m_length << endl;

    return 0;
}
