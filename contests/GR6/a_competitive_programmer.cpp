#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;

        if (s.find('0') == string::npos) {
            cout << "cyan" << endl;
            continue;
        }

        if (s.find('2') == string::npos &&
            s.find('4') == string::npos &&
            s.find('6') == string::npos &&
            s.find('8') == string::npos &&
            count(begin(s), end(s), '0') <= 1) {
            cout << "cyan" << endl;
            continue;
        }

        int sum = 0;
        for ( char c : s) {
            sum += c - '0';
        }

        if (sum % 3 != 0) {
            cout << "cyan" << endl;
            continue;
        }

        cout << "red" << endl;
    }
 
    return 0;
}