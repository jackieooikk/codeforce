#include <iostream>

using namespace std;

int main() {
    int n;
    double l;

    cin >> n >> l;

    double line[n];

    for (int i = 0; i < n; i++) {
        cin >> line[i];
    }

    sort(line, line + n);

    double max = line[0];

    max = (l - line[n-1] > max) ? l - line[n-1] : max;

    for (int i = 1; i < n; i++) {
        double difference = (line[i] - line[i-1]) / 2;
        if (difference > max) {
            max = difference;
        }
    }
    cout.precision(20);
    cout << max << endl;
}



