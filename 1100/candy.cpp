#include <iostream>

using namespace std;


int binary_search(int* line, int n, int value) {
    int left = 0;
    int right = n - 1;
    int middle = (left + right) / 2;

    while (left < right) {
        middle = (left + right) / 2;

        if (value < line[middle]) { 
            right = middle - 1;
        } else if (value > line[middle]) {
            left = middle + 1;
        } else {
            return middle;
        }

    }

    return left;
}



int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, q;

        cin >> n >> q;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a, a+n, greater<>());
        
        for (int i = 1; i < n; i++) {
            a[i] = a[i] + a[i-1];
        }

        while (q--) {
            int required;
            cin >> required;
            
            if (required > a[n-1]) {
                cout << -1 << endl;
            } else {
                int index = binary_search(a, n, required);
                while (a[index] < required) {
                    index++;
                }
                while (a[index - 1] >= required && index - 1>= 0) {
                    index--;
                }
                cout << index + 1 << endl;
            }

       }
    }
}


    


