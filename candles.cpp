#include <iostream>
using namespace std;

int main() {
    long long time, a, b;

    cin >> a >> b;
    time = a;
    while (a > b - 1) {
        time += a/b;
        a = a/b + (a%b);
    }

    cout << time << endl;
}

    
