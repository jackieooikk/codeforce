#include <iostream>
using namespace std;

int main() {
    long long answer, want;

    cin >> want;
    answer = 1;
    while (want > 1) {
        if (want % 2 == 1) {
            answer++;
        } 
        want = want / 2;
    }

    cout << answer << endl;
    return 0;

    

}
