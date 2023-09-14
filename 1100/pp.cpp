#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int lines, n, m;
        cin >> lines >> n >> m;

        int ns[n];
        int ms[m];

        for (int i = 0; i < n; i++) {
            cin >> ns[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> ms[i];
        }

        int answer[n+m];


        int n_iter, m_iter;
        n_iter = 0;
        m_iter = 0;
        int possible = 1;
        int iter = 0;

        while (n_iter < n || m_iter < m) {
            
            if (ns[n_iter] == 0 && n_iter < n) {
                lines++; 
                answer[iter] = ns[n_iter];
                n_iter++;
            } else if (ms[m_iter] == 0 && m_iter < m) {
                lines++;
                answer[iter] = ms[m_iter];
                m_iter++;
            } else if (ns[n_iter] <= lines && n_iter < n) {
                answer[iter] = ns[n_iter];
                n_iter++;
            } else if (ms[m_iter] <= lines && m_iter < m) {
                answer[iter] = ms[m_iter];
                m_iter++;
            } else {
                possible = 0;
                break;
            }
            iter++;
        }

        if (possible) {
            for (int i = 0 ; i < n+m; i++) {
                cout << answer[i] << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
            




