#include <iostream>
#include <map>
using namespace std;


int main() {
    int n, m;

    cin >> n >> m;

    int inputNumbers[n];

    for (int i = 0; i < n; i++) {
        cin >> inputNumbers[i];
    }

    map<int, int> mapping;

    int answer[n];
    int distinct = 0;
    for (int i = n - 1; i >= 0; i--) {
        mapping[inputNumbers[i]]++;
        if (mapping[inputNumbers[i]] == 1) {
            distinct++;
        }
        answer[i] = distinct;
    }

    while (m--) {
        int x;
        cin >> x;

        cout << answer[x - 1] << endl;
    }
}

