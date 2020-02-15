#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    vector<int> a(n);

    unordered_map<int, int> b;
    vector<int> x_cand;

    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        a[i] = tmp;
    }
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        //cout << tmp << endl;
        b[tmp] = b[tmp] + 1;
    }

    for (int i = 0; i < n; ++i) {
        for (auto p : b) {
            x_cand.push_back(abs(p.first - a[i]));
        }
    }

    //sort(begin(b), end(b));

    for (int x : x_cand) {
        //vector<int> atmp = a;
        unordered_map<int, int> btmp = b;
        //cout << "x: " << x << endl;
        for (int i = 0; i < n; ++i) {
            int atmp = (a[i] + x) % m;
            btmp[atmp]--;

            if (btmp[atmp] < 0) break;
        }

        bool ok = true;
        for (auto p : btmp) {
            if (p.second != 0) {
                ok = false;
                break;
            }
        }

        if (ok) {
            cout << x << endl;
            return 0;
        }

    }

 
    return 0;
}