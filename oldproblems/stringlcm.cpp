#include <iostream>
using namespace std;

int main() {
    long testcases;
    cin >> testcases;

    while (testcases--) {
        string one, two;
        cin >> one >> two;

        long length = 0;
        long length_one = one.size();
        long length_two = two.size();

        string final_string = "";
        int possible = 1;
        do {
            if (one[length % length_one] == two[length % length_two]) {
                final_string += one[length % length_one];
            } else {
                possible = 0;
                break;
            }
            length++;
        }
        while (length % length_one != 0 || length % length_two != 0); 
        
        if (possible) {
            cout << final_string << endl;
        } else {
            cout << -1 << endl;
        }
    }
}

