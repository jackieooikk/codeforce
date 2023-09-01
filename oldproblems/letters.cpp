#include <iostream>

using namespace std;

int main() {
    long long n, m;

    cin >> n >> m;
    m++;
    long long dorms[n];
    long long letters[m];
    letters[0] = 0;

    for (int i = 0; i < n; i++) {
        cin >> dorms[i];
    }
    
    long long dorm = 0;
    long long room = 0;

    long long next_room;

    for (int i = 1; i < m; i++) {
        cin >> letters[i];
        next_room = letters[i] - letters[i-1];

        while (next_room + room  > dorms[dorm]) {
            next_room = next_room - dorms[dorm] + room;
            dorm++;
            room = 0;
        }

        room += next_room;

        cout << dorm + 1 << " " << room << endl;
    }


}

