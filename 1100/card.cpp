#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        
        long long pyramids = 0;
        while (n > 1) {
            long long height = 1;
            long long add = 2;
            long long matches = 0;
            while (matches + add <= n) {
                matches += add;
                height++;
                add = height * 2 + height - 1;
            }
            n -= matches;
            pyramids++;

        }
        cout << pyramids << endl;
    }

        


        

    
}
