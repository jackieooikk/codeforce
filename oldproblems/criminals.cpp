#include <iostream>
using namespace std;

int main() {
    long cities, bear_location;

    cin >> cities >> bear_location;

    long criminals[cities];
    bear_location--;
    for (int i = 0; i < cities; i++) {
        cin >> criminals[i];
    }

    long count = 0;

    long distance = 1;
    
    count += criminals[bear_location];

    while (bear_location + distance < cities && bear_location - distance >= 0) {
        if (criminals[bear_location + distance] + criminals[bear_location - distance] == 2) {
            count += 2;
        }
        distance++;
    }

    while (bear_location + distance < cities) {
        count += criminals[bear_location + distance];
        distance++;
    }

    while (bear_location - distance >= 0) {
        count += criminals[bear_location - distance];
        distance++;
    }
    
    cout << count << endl;
}


