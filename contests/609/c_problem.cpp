#include <bits/stdc++.h>

using namespace std;

void incr(string& rep, int i) {

    int a = rep[i] - '0';
    rep[i] = to_string(a+1).back();
    
    if (a == 9) {
        incr(rep, i-1);
    }
}

int main() {

    int n, k, x;
    cin >> n >> k >> x;

    string orig = to_string(x);
    string rep = to_string(x).substr(0, k);

    while (true) {
        //cout << "rep: " << rep << endl;

        string s = rep;

        while (s.size() <= n) {
            s += rep;
        }

        s = s.substr(0, n);

        //cout << s << endl;

        if (s < orig) {
            incr(rep, rep.size()-1);
        } else {
            cout << s.size() << endl;
            cout << s << endl;
            return 0;
        }
    }

 
    return 0;
}