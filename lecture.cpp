#include <iostream>
#include <string.h>
using namespace std;

int main() {
    long lecture, m;

    cin >> lecture  >> m;

    string first_language[m];
    string second_language[m];

    for (int i = 0; i < m; i++) {
        cin >> first_language[i] >> second_language[i];
    }

    for (int j = 0; j < lecture; j++) {
        string word;
        cin >> word;

        for (int i = 0; i < m; i++) {
            if (word == first_language[i] || word == second_language[i]) {
                
                if (first_language[i].size() <= second_language[i].size() ) {
                    cout << first_language[i];
                } else {
                    cout << second_language[i];
                }
            }
            //cout << second_language[i];
        }
        if (j == lecture - 1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }

    return 0;
}


