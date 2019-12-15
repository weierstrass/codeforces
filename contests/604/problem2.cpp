#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 0; cin >> a;

    for (int t = 0; t < a; ++t)
    {
        int n = 0; cin >> n;
        int arr[n+1];
        for (int j = 0; j < n; ++j) {
            int k = 0; cin >> k;
            arr[k] = j;
        }
        
        string res(n, '0');

        int minpos = n;
        int maxpos = 0;
        for (int i = 1; i <= n; ++i) {
            minpos = ::min(arr[i], minpos);
            maxpos = ::max(arr[i], maxpos);

            if (abs(maxpos - minpos) == i - 1) {
                res[i-1] = '1';
            }
        }
        cout << res << endl;

    }

    return 0;
}