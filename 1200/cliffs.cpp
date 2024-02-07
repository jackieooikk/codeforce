#include <iostream>

using namespace std;

void switch_print(int* line, int n, int i) {

    for (int j = i; j < n; j++) {
        cout << line[j] << " ";
    }

    for (int j = 0; j < i; j++) {
        cout << line[j] << " ";
    }
    cout << endl;

}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int line[n];
        
        for (int i = 0 ; i < n; i++) {
            cin >> line[i];
        }

        sort(line, line + n);

        int min_dif = 0;
        int choose;
        for (int i = 1; i < n; i++) {
            int dif = line[i] - line[i - 1];

            if (dif == 0) {
                choose = i;
                break;
            } else {
                if (min_dif == 0 || dif < min_dif) {
                    min_dif = dif;
                    choose = i;
                }
            }
        }
        if (n == 2) {
            cout << line[0] << " " << line[1] << endl;
        } else {
            switch_print(line, n, choose);
        }
    }
}

