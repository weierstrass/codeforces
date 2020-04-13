#include <bits/stdc++.h>

using namespace std;

bool valid(vector<int>& seq) {
    if (seq.empty()) return true;

    int a = 0;
    int b = seq.size() - 1;
    char x = seq[0];
    char y = 0;
    while (a < b) {
        if (seq[a] != seq[b]) return false;

        if (y) {
            if (seq[a] != y) return false;

        } else {
            if (seq[a] != x) {
                y = seq[a];
            }
        }
        a++;
        b--;
    }
    return true;
}

int maxLen(int i, vector<int>& v, vector<int>& seq, string choice, unordered_map<int, int>& count, unordered_map<string, int>& memo) {
    if (i == v.size()) {
        if (valid(seq)) return seq.size();
        return -1;
    }



    auto key = choice +  "-" + to_string(i);

    //cout << key << endl;

    if (memo.find(key) != memo.end()){
        cout << "hit" << memo.at(key) << endl;
        return memo.at(key);
    }

    int a = maxLen(i+1, v, seq, choice, count, memo);
    int b = 0;
    count[v[i]]++;
    if (count.size() <= 2) {
        seq.push_back(v[i]);
        b = maxLen(i+1, v, seq, choice + to_string(v[i]), count, memo);
        seq.pop_back();
    }
    count[v[i]]--;
    if (count.at(v[i]) == 0) count.erase(v[i]);

    int res = max(a, b);
    memo[key] = res;

    return res;
}

int main() {
    int T; cin >> T;

    for (int t = 0; t < T; ++t) {
        int N; cin >> N;

        vector<int> v(N);
        for (int i = 0; i < N; ++i) {
            cin >> v[i];
        }

        vector<int> seq;
        string choice;
       // map<pair<vector<int>, int>, int> memo;
        unordered_map<string, int> memo;

        unordered_map<int, int> count;
        cout << maxLen(0, v, seq, choice, count, memo) << endl;

    }
 
    return 0;
}