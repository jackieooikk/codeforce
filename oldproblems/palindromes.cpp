#include <iostream>
#include <string>
using namespace std;

int main() {
    string number;
    cin >> number;

    cout << number;
    reverse(number.begin(), number.end());
    cout << number << endl;

    
}
