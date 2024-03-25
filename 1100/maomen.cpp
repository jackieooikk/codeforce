#include <iostream>
#define ll long long
using namespace std;

struct Node {
    int index, target;
    ll value;
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;

        cin >> n >> k;

        Node nodes[n];

        for (int i = 0; i < n; i++) {
            nodes[i].index = i;
            cin >> nodes[i].value;
        }

        sort(nodes, nodes + n, [](const Node &a, const Node &b) -> bool
            { return a.value < b.value; });

        for (int i = 0; i < n; i++) {
            nodes[i].target = i;
        }

        sort(nodes, nodes + n, [](const Node &a, const Node &b)
            {return a.index < b.index; });

        int require = 1;
        for (int i = 0; i < n - 1; i++) {
            if (nodes[i].target + 1 != nodes[i + 1].target) {
                require++;
            }
        }
        cout << "WHAT\n";
        cout << (require <= k ? "Yes" : "No") << endl;
    }
   
}
