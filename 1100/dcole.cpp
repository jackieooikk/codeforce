#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;

    cin >> n;

    long long iteration = 0;
    long long total = 0;

    while (total + 5 * pow(2, iteration) < n) {
        total += 5 * pow(2, iteration);
        iteration++;
    }

    long long remainder = n - total;

    string names[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    
    long long index = (remainder + pow(2, iteration) - 1)/pow(2, iteration);
    cout << names[index - 1] << endl;
}
