#include<iostream>
#include<vector>

using namespace std;

int main() {
     int t; 
     cin >> t;

     while (t--) {
         int n;
         cin >> n;

         vector<int> nums(n);
         for (int i = 0; i < n; i++) {
             cin >> nums[i];
         }

         int round = 0;
         int alice, bob;
         int l, r;
         int previous = 0;
         int current = 0;

         alice = 0;
         bob = 0;
         l = 0;
         r = n - 1;


         while (l <= r) {
             while (l <= r && current <= previous) {
                 if (round % 2 == 0) {
                     current += nums[l];
                     l++;
                 } else {
                     current += nums[r];
                     r--;
                 }
             }

             if (round % 2 == 0) {
                 alice += current;
             } else {
                 bob += current;
             }

             previous = current;
             current = 0;
             round++;
         }

        cout << round << " " << alice << " " << bob << endl;
     }
}

