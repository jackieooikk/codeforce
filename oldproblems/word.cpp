#include <iostream>

using namespace std;

int main() {

    string word;

    cin >> word;

    int lower_letters = 0;
    for (int i = 0; i < word.size(); i++) {
        if (islower(word[i])) {
            lower_letters++;
        }
    }

    for (int i = 0; i < word.size(); i++) {
        if (lower_letters * 2 < word.size()) {
            word[i] = toupper(word[i]);
        } else {
            word[i] = tolower(word[i]);
        }
    }

    cout << word << endl;
    return 0;
}

