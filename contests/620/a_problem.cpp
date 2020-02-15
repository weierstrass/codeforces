#include <bits/stdc++.h>

using namespace std;

int main() {

    int n; cin >> n;

    for (int i = 0; i < n; ++i) {
        int x, y, a, b;
        cin >> x >> y >> a >> b;

        int nom = y - x;
        int denom = a + b;

        if (nom % denom == 0) {
            cout << nom / denom << endl;
        } else {
            cout << -1 << endl;
        }
    }
 
    return 0;
}