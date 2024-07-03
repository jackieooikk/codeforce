#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int restDays = 0;
    //0 nothing 1 contest 2 gym 3 either
    int previous = 0;
    while (n--) {
        int x;
        cin >> x;


        if (x == 0) {
            restDays++;
            previous = 0;
        } else if (x == 3) {
            if (previous == 1) {
                previous = 2;
            } else if (previous == 2) {
                previous = 1;
            } else {
                previous = 3;
            }
        } else {
            if (previous == 0) {
                previous = x;
            } else {
                if (previous == x) {
                    restDays++;
                    previous = 0;
                } else {
                    previous = x;
                }
            }
        }
    }
    cout << restDays << endl;
}


