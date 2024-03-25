#include <iostream>

using namespace std;

int main() {

    string input;
    int n_stones;

    cin >> n_stones >> input;

    int number_changes = 0;

    for (int i = 1; i < n_stones; i++) {
        if (input[i] == input [i - 1]) {
            number_changes++;
        }
    }

    cout << number_changes << endl;
    return 0;
}
