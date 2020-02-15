#include <bits/stdc++.h>

using namespace std;

bool isPalindrom(string s) {
    int n = s.size();
    for (int i = 0; i < n/2; ++i) {
        if (s[i] != s[n-1-i]) return false;
    }
    return true;
}

int main() {

    int n, m;
    cin >> n >> m;

    vector<int> a(n);

    unordered_map<string, bool> words;

    for (int i = 0; i < n; ++i) {
        string tmp;
        cin >> tmp;
        words[tmp] = true;
    }

    string beg, end, mid;

    for (auto it = words.begin(); it != words.end(); ++it) {
        if (!it->second) continue;
        string word = it->first;
        string revWord = word;
        reverse(begin(revWord), std::end(revWord));

        if (words.find(revWord) != words.end() && words.find(revWord) != it) {
            beg += word;
            end = revWord + end;
            words.find(revWord)->second = false;
        }
    }


    for (auto w : words) {
        if (w.second && isPalindrom(w.first) && w.first.size() > mid.size()) {
            mid = w.first;
        }
    }

    string res = beg + mid + end;
    cout << res.size() << endl;
    cout << res << endl;
 
    return 0;
}