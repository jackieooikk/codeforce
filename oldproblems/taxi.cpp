#include <iostream>
using namespace std;


int main() {
    long groups;
    cin >> groups;

    int groupSize;
    long total[4] = {0};

    for (int i = 0; i < groups; i++) {
        cin >> groupSize;
        total[groupSize - 1]++;
    }
    
    long taxis;

    taxis = total[3];
    
    taxis += total[2];

    total[0] -= total[2];

    taxis += (total[1] + 1) / 2;

    if (total[1] % 2 != 0) {
        total[0] -= 2;
    }
    
    if (total[0] > 0) {
        taxis += (total[0] + 3) / 4;
    }
    cout << taxis << endl;
}


    
