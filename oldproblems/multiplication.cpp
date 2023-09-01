#include <iostream>
using namespace std;

int main() {
    long long size, number, count;
    cin >> size >> number;
    count = 0;

    for (int i = 1; i <= number && i <= size; i++) {
        if (number % i == 0) {
            if (i * i == number) {
                count++;
            } else if (number / i <= size){
                count += 1;
            }
        }
    }

    cout << count << endl;
    return 0;
}
