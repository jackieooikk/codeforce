#include <iostream>
#include <list>
#define pb push_back

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    list <int> deck;
    int queries[q];

    int dummy;
    for (int i = 0; i < n; i++) {
        cin >> dummy;
        deck.pb(dummy);
    }

    int query;
    for (int i = 0; i < q; i++) {
        cin >> query;
        
        list<int>::iterator it = deck.begin();
        
        for (int j = 0; j < n; j++) {
            if (query == *it) {
                cout << j + 1 << " ";
                int dummy = *it;
                deck.erase(it);
                deck.push_front(dummy);
                break;
            }
            it++;
        }
    }
    cout << endl;
}
