#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cin >> a >> b >> c;

    int plus_plus = a + b + c;
    int times_times = a * b * c;
    int plus_times = (a + b) * c;
    int times_plus = a * (b + c);

    cout << max(max(plus_plus, times_times), max(plus_times, times_plus)) << endl;

    return 0;
}
