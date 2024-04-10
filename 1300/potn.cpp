#include <iostream>

using namespace std;

int find_factor(int n, int start) {
    for (int i = start + 1; i * i < n; i++) {
        if (n % i == 0) {
            return i;
        }
    }

    return 0;
}


int main() {
    int t;
    cin >> t;

    while (t--) {
       int n;

       cin >> n;

       int first = find_factor(n, 1);

       if (first == 0) {
           cout << "NO\n";
           continue;
       }


       int second = find_factor(n/first, first);

       if (second == 0) {
           cout << "NO\n";
           continue;
       }

       int third = (n/first)/second;

       cout << "YES\n" << first << " " << second << " " << third << endl;
    }
} 
