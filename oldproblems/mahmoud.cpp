#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector <long long> line_segments (n);

    for (int i = 0; i < n; i++) {
        cin >> line_segments[i];
    }
    
    sort(line_segments.begin(), line_segments.end());

    for (int i = 0; i < n; i++) {
        long long a, b, c;
        a = line_segments[i];
        b = line_segments[i + 1];
        c = line_segments[i + 2];
        
        if (a < b + c && b < a + c && c < a + b) {
            cout << "YES\n";
            return 0;
        }
    }


    cout << "NO\n";
    return 0;
}

