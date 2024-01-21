#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;


        int line[n];

        for (int i = 0; i < n; i++) {
            cin >> line[i];
        }

        sort(line, line + n);

        array<vector<int>, 2> game;

        for (int i = 0; i < n; i++) {
            game[line[i] % 2].push_back(line[i]);
        }

        long long score = 0;
        vector<int>* player; 
        vector<int>* opp;

        for (int i = 0; i < n; i++) {
            
            if (i % 2 == 0) {
                player = &(game[0]);
                opp = &(game[1]);
            } else {
                player = &(game[1]);
                opp = &(game[0]);
            }




            if ((*player).empty()) {
                (*opp).pop_back();

            } else if ((*opp).empty()) {
                if (i % 2 == 0) {
                    score += (*player).back();
                } else {
                    score -= (*player).back();
                }
    
                (*player).pop_back();

            } else if ((*player).back() > (*opp).back()) {
                
                if (i % 2 == 0) {
                    score += (*player).back();
                } else {
                    score -= (*player).back();
                }

                (*player).pop_back();

            } else {
                (*opp).pop_back();

            }
        }
        
        if (score == 0) {
            cout << "Tie\n";
        } else if (score > 0) {
            cout << "Alice\n";
        } else {
            cout << "Bob\n";
        }
    }
}
        



