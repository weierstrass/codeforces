#include <bits/stdc++.h>

using namespace std;

int main() {
    int T, S, V, J, e, f;
    cin >> T >> S >> V >> J >> e >> f;
 
    if (f >= e) {
        int F = min(S, min(V, J));
        cout << f*F + e*(min(T, (J-F))) << endl;
    } else {
        int E = min(T, J);
        cout << e*E + f*(min(S, min(V, J-E))) << endl;
    }
 
    return 0;
}