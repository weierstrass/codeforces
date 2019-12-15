
#include <bits/stdc++.h>

#include <string>

using namespace std;

bool canBeBeautiful(string s) {

    for (int i = 0; i < s.size() - 1; ++i) {
        if (s[i] != '?') {
            if (s[i] == s[i+1]) return false;
        }
    }
    return true;
}

string mb(string s) {
    string res;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '?') {
            list<char> avl = {'a', 'b', 'c'};
            if (i > 0) avl.remove(s[i-1]);
            if (i < s.size()-1) avl.remove(s[i+1]);

            //cout << avl.size() << endl;
            s[i] = avl.front();


        } else {
            //s[i] = s[i];
        }
    }

    return s;

}

int main() {
    int a = 0;
    cin >> a;

    for (int i = 0; i < a; ++i)
    {
        string ss;
        cin >> ss;
        if (canBeBeautiful(ss)) {
            cout << mb(ss) << endl;
        }
        else {
            cout << -1 << endl;
        }

    }

    return 0;
}