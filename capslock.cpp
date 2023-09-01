#include <iostream>
using namespace std;

int main() {
    string word;

    cin >> word;
    
    for (int i = 1; i < word.size(); i++) {
        if (islower(word[i])) {
            cout << word << endl;
            return 0;
        }
    }

    if (isupper(word[0])) {
        word[0] = tolower(word[0]);
    } else {
        word[0] = toupper(word[0]);
    }

    for (int i = 1; i < word.size(); i++) {
        word[i] = tolower(word[i]);
    }

    cout << word << endl;
    return 0;
}
