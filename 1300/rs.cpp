#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> myMap;

    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;
        
        if (myMap[s] == 0) {
            cout << "OK";
        } else {
            
            cout << s << myMap[s];
        }

            
        myMap[s]++;
        cout << endl;



    }
}
