#include <bits/stdc++.h>

using namespace std;

int main() {
    int T; cin >> T;

    for (int t = 0; t < T; ++t) {
        int N; cin >> N;
        if (N % 2 == 0) {
            cout << N / 2 - 1 << endl;
        } else {
            cout << N / 2 << endl;
        }
    }
 
    return 0;
}