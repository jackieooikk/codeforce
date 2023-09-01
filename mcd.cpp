#include <iostream>

using namespace std;

int main() {
    long testcases;

    cin >> testcases;

    while (testcases--) {
        long n, a, b;

        cin >> n >> a >> b;

        string line;

        cin >> line;

        char previous = line[0];
        long subsets = 1;

        for (int i = 0; i < line.size(); i++) {
            if (line[i] != previous) {
                subsets++;
                previous = line[i];
            }
        }

        long max_points;

        if (b >= 0) {
            max_points = n * (a + b);
        } else {
            max_points = n * a;
            max_points += (subsets/2 + 1) * b;
        }

        cout << max_points << endl;
    }
}

