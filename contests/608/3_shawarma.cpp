#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sx, sy;
    cin >> n >> sx >> sy;

    int nN = 0, nS = 0, nW = 0, nE = 0;

    for (int i = 0; i < n; ++i) {
       int x, y;
       cin >> x >> y;

       if (x > sx) {
           nE++;
       }

       if (x < sx) {
           nW++;
       }

       if (y > sy) {
           nN++;
       }

       if (y < sy) {
           nS++;
       }
    }

    const int m = max(max(nN, nS), max(nE, nW));
    cout << m << endl;
    if (m == nN) {
        cout << sx << " " << (sy + 1) << endl;
    } else if(m == nS) {
        cout << sx << " " << (sy - 1) << endl;
    } else if(m == nW) {
        cout << (sx - 1) << " " << sy << endl;
    } else if(m == nE) {
        cout << (sx + 1) << " " << sy << endl;
    }

    return 0;
}