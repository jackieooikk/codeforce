#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, t;

    cin >> n >> t;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int max = 0;
    int current = 0;
    int currentCount = 0;

    for (int i = 0; i < n; i++) {
        current += nums[i];
        currentCount++;
        
        while (current > t) {
            current -= nums[i-currentCount+1];
            currentCount--;
        }

        max = (max > currentCount) ? max : currentCount;
    }

    cout << max << endl;
        

}
