#include <bits/stdc++.h>

using namespace std;

int main() {
    int T; cin >> T;

    for (int t = 0; t < T; ++t) {
      
      vector<vector<char>> m(9, vector<char>(9));
      for (int i = 0; i < 9; ++i) {
          for (int j = 0; j < 9; ++j) {
               cin >> m[i][j];
          }
      }

      for (int i = 0; i < m.size(); ++i) {
          for (int j = 0; j < m[0].size(); ++j) {
              if (m[i][j] == '1') cout << '2';
              else cout << m[i][j];
          }
          cout << endl;
      }

    }
 
    return 0;
}