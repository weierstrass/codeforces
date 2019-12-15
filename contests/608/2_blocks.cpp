#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; string s;
    cin >> n >> s;

    vector<int> sol;

    // Move all W to the left.
    for (int i = 0; i < n-1; ++i) {

        if (s[i] == 'B' && s[i+1] == 'W') {
            s[i] = 'W';
            s[i+1] = 'B';
            sol.push_back(i);
        }else if (s[i] == 'B' && s[i+1] == 'B') {
            s[i] = 'W';
            s[i+1] = 'W';
            sol.push_back(i);
        }

    }

    const int nW = count(begin(s), end(s), 'W');
    const int nB = count(begin(s), end(s), 'B');

    // If there is an odd number of both B and W
    // it is not possible to find a solution.
    // Otherwise flip over the even ones.
    if (nW % 2 != 0 && nB %2 != 0) {
        cout << -1 << endl;
    } else {
        if (nW % 2 != 0) {
            for (int i = 0; i < s.size() - 1; ++i) {
                if (s[i] == 'B' && s[i+1] == 'B') {
                    s[i] = 'W';
                    s[i+1] = 'W';
                    sol.push_back(i);
                }
            }
        } else {
            for (int i = 0; i < s.size() - 1; ++i) {
                if (s[i] == 'W' && s[i+1] == 'W') {
                    s[i] = 'B';
                    s[i+1] = 'B';
                    sol.push_back(i);
                }
            }
        }
        cout << sol.size() << endl;

        for (int i = 0; i < sol.size(); ++i) {
            cout << sol[i]+ 1;
            if (i == sol.size() - 1) cout << endl;
            else cout << " ";
        }
    }
   
    return 0;
}