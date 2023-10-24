/**
 * 	Author: Galuu
 * 	Created: 2023-07-27 23:39:10
**/
#include <bits/stdc++.h>
using namespace std;
#define ar array
using ll = long long;
using ld = long double;
using ull = unsigned long long;
const int mxN = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


void solve(){
    int b, h, c;
    cin >> b >> c >> h;
    cout << 1 + (2 * min(b-1, c+h)) << "\n";
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
