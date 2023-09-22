#include <iostream>
#include <vector>

#define pb push_back

using namespace std;

void print_line(vector <int> line, int n) {
    for (int i = 0 ; i < n; i++) {
        cout << " " << line[i];
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> positive;
    vector<int> negative;
    vector<int> zeros;

    int dummy;
    for (int i = 0; i < n; i++) {
        cin >> dummy;
        if (dummy < 0) {
            negative.pb(dummy);
        } else if (dummy > 0) {
            positive.pb(dummy);
        } else {
            zeros.pb(dummy);
        }
    }


    cout << 1 << " " << negative[negative.size() -1] << endl;
    negative.pop_back();

    if (positive.size() > 0) {
        cout << 1 << " " << positive[positive.size() - 1] << endl;
        positive.pop_back();
    } else {
        cout << 2 << " " << negative[negative.size() - 1] << " " << negative[negative.size() - 2] << endl;
        negative.pop_back();
        negative.pop_back();

    }

    int count = 0;
    count += positive.size() + negative.size() + zeros.size();

    cout << count;
    print_line(positive, positive.size());
    print_line(negative, negative.size());
    print_line(zeros, zeros.size());
    cout << endl;
    
}

