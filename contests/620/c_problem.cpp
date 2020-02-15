#include <bits/stdc++.h>

using namespace std;

struct pair_hash {
    template <class T1, class T2>
    std::size_t operator () (const std::pair<T1,T2> &p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        return h1 ^ h2;  
    }
};

unordered_map<pair<int,int>, bool, pair_hash> memo;

bool possible(int t, const unordered_map<int, pair<int, int>>& customers, int T, const int tLast) {
    //cout << t <<  " " << tLast << " T: " << T << endl;
    //string make_pair(t, T) = t + "&" +T;

    if (memo.find(make_pair(t, T)) != memo.end()) return memo.at(make_pair(t, T));

    if (customers.find(t) != customers.end()) {
        auto p = customers.at(t);

        if (T < p.first || T > p.second) {
           // memo[make_pair(t, T)] = false;
           //cout << "false" << endl;
            return false;
        }
    }
    
    if (t == tLast) {
       // memo[make_pair(t, T)] = true;
        return true;
    }



    memo[make_pair(t, T)] = possible(t + 1, customers, T, tLast) || 
            possible(t + 1, customers, T + 1, tLast) || 
            possible(t + 1, customers, T - 1, tLast);

    return memo.at(make_pair(t, T));
}


int main() {

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        int n, m;
        cin >> n >> m;

        unordered_map<int, pair<int, int>> customers;

        int tLast;
        for (int j = 0; j < n; ++j) {
            int t, l, h;
            cin >> t >> l >> h;
            customers[t] = make_pair(l, h);
            tLast = t;
        }

        memo.clear();

        if (possible(0, customers, m, tLast)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }


    }

 
    return 0;
}