#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;


    if (n % 2 == 0) {
        cout << (n+4) << " " << 4 << endl;
    } else {
        cout  << n + ((n)/9)*9+ 9 <<  " " << ((n)/9)*9 + 9 << endl;
    }
 
    return 0;
}