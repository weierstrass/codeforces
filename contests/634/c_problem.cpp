#include <bits/stdc++.h>

using namespace std;

int main() {

    int T; cin >> T;

    for (int t = 0; t < T; ++t) {
        
        int n; cin >> n;

        vector<int> A(n);
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }

        unordered_map<int, int> count;
        int dist(0);
        int maxCount(0);
        for (int a : A) {
            if (count.find(a) == count.end()) {
                dist++;
            }
            count[a]++;

            maxCount = max(maxCount, count.at(a));
        }

        if (maxCount == dist) {
            cout << maxCount - 1 << endl;
        } else {
            cout << min(maxCount, dist) << endl;
        }
    }
    
    return 0;
}