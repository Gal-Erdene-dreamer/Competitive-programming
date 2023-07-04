#include <bits/stdc++.h>
using namespace std;
#define elif else if
using ll = long long;


void solve(){
    ll n;
    cin >> n;
    ll ans = n*4;
    ans+=n-1;
    ans+=n*(n-3);
    cout << ans+3<< "\n";
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}