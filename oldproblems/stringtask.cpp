#include <iostream>
using namespace std;

int check_vowel(char character) {
    char vowels[7] = "aoyeui";
    for (int j = 0; j < 7; j++) {
        if (character == vowels[j]) {
            return 1;
        }
    }
    return 0;
}

int main() {

    string word, finish;
    cin >> word;
    finish = "";

    for (int i = 0; i < word.size(); i++) {
        word[i] = tolower(word[i]);
        if (!check_vowel(word[i])) {
            finish += ".";
            finish += word[i];
        }
        
    }
    
    cout << finish << endl;
    return 0;

}
