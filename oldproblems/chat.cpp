#include <iostream>
using namespace std;

int main() {
    string hello = "hello";
    string chat_input;

    cin >> chat_input;
    int j = 0;

    for (int i = 0; i < chat_input.size(); i++) {
        if (chat_input[i] == hello[j]) {
            j++;
        }
    }
    if (j == 5) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
