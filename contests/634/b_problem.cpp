#include <bits/stdc++.h>

using namespace std;

int main() {

    int T; cin >> T;

    for (int t = 0; t < T; ++t) {
        int n, a, b; cin >> n >> a >> b;

        string base;
        for (int i = 0; i < b; ++i) {
            base += 'a' + i;
        }

        while (base.size() < n) {
            base += base;
        }
        base = base.substr(0, n);
        cout << base << endl;
    }
 
    return 0;
}