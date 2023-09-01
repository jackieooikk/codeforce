#include <iostream>
using namespace std;

int main() {
    long n, team_one, team_two;
    team_one = 0;
    team_two = 0;
    cin >> n;

    string first_team, second_team, team;

    cin >> first_team;
    team_one++;

    for (int i = 1; i < n; i++) {
        cin >> team;
        if (team == first_team) {
            team_one++;
        } else {
            team_two++;
            second_team = team;
        }
    }

    if (team_one > team_two) {
        cout << first_team << endl;
    } else {
        cout << second_team << endl;
    }

}

