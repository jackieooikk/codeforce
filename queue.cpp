#include <iostream>
using namespace std;

int main() {
    int n, time;

    cin >> n >> time;

    string line, next_line;
    cin >> line;

     

    for (int i = 0; i < time; i++) {
        for (int j = 1; j < n; j++) {
            if (line[j] == 'G' && line[j-1] == 'B') {
                line[j] = 'B';
                line[j-1] = 'G';
                j++;
            }
        }
    }

    cout << line << endl;
    return 0;

}
