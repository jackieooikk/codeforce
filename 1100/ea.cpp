#include <iostream>
#include <map>
using namespace std;


int main() {
    int n, m, value;
    cin >> n;

    map<int, int> line;

    for (int i = 0; i < n; i++) {
        cin >> value;
        line[value] = i;
    }

    cin >> m;
    

    long long query, v, p, a;
    v = 0;
    p = 0;  
    for (int i = 0; i < m; i++) {
        cin >> query;
        a = line[query];
        v += a + 1;
        p += (n - a);
    }

    cout << v << " " << p << endl;
}


