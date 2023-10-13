#include <iostream>

using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    
    int single = n * a;
    int multi = ((n + m - 1) / m) * b;
    int mixed = (n / m) * b + (n % m) * a;

    int min = (single < multi) ? single : multi;
    min = (mixed < min) ? mixed : min;

    cout << min << endl;

}
