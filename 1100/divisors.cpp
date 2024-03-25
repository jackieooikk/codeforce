#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int line[n];
    for (int i = 0; i < n; i++) {
        cin >> line[i];
    }

    sort(line, line + n, greater<int>());

    int one = line[0];
    int two;
    int same = 0;

    for (int i = 1; i < n; i++) {
        if (line[i] == line[i - 1]) {
            two = line[i];
            break;
        } else {
            same = 0;
        }

        if (!same) {
            if (one % line[i] != 0) {
                two = line[i];
                break;
            }
        } else {
            if (pow(line[i], same + 1) != one) {
                two = line[i];
                break;
            }
        }
    }

    cout << one << " " << two << endl;


}


