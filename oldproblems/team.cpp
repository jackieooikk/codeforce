#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int writeN = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        
        for (int j = 0; j < 3; j++) {
            int a;
            cin >> a;
            sum += a;
        }

        if (sum > 1) {
            writeN++;
        }
    }

    cout << writeN << endl;
}
