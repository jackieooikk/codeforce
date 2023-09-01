#include <iostream>

using namespace std;

int main() {

    string input;
    cin >> input;

    int unique = input.size();
    for (int i = 0; i < input.size(); i++) {
        for (int j = i + 1; j < input.size(); j++) {
            if (input[i] == input[j]) {
                unique--;
                break;
            }
        }
    }
    if (unique % 2 == 0) {
        cout << "CHAT WITH HER!\n";
    } else {
        cout << "IGNORE HIM!\n";
    }

    return 0;
}

