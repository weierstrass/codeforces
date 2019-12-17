#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    while(n--) {
        long long val; cin >> val;

        int rem = val % 14;

        if (rem > 0 && rem <= 6 && val > 14) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}