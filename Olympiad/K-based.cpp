#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, k, m;
    cin >> n >> k >> m;
    ll num[n];
    ll num0[n];
    num[1] = (k-1) * (k-1) % m;
    num0[1] = (k-1) % m;
    for(ll i = 2; i < n; i++){
        num0[i] = num[i-1] * 1;
        num[i] = num0[i-1] * (k-1) + num[i-1] * (k - 1);
    }
    cout << (num[n-1] + num0[n-1]) % m;
}


int main()
{
    int t = 1;
    //cin >> t;
    while(t--) solve();
    return 0;
}
