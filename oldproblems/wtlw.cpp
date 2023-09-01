#include <iostream>
#include <cstring>

using namespace std;

const int MAX_SIZE = 101;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char word[MAX_SIZE];
        cin >> word;
        
        int length = strlen(word);
        
        if (length <= 10) {
            cout << word << endl;
        } else {
            cout << word[0] << length - 2 << word[length - 1] << endl;
        }
    }

    return 0;
}
