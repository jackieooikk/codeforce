#include <iostream>
using namespace std;

int main() {
    long long time, houses, house_job, jobs, current_house;

    current_house = 1;
    time = 0;
    
    cin >> houses >> jobs;

    while (jobs--) {
        cin >> house_job;
        if (house_job - current_house < 0) {
            time += house_job + houses - current_house;
        } else {
            time += house_job - current_house;
        }

        current_house = house_job;
    }

    cout << time << endl;
    return 0;
}

