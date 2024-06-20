#include<iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int nums[n]; 
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums, nums + n);

    int total = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] >= total) {
            count++;
            total += nums[i];
        }
    }   

    cout << count << endl;
}
