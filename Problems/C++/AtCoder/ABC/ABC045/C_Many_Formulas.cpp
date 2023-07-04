#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9) + 7;

string s;
ll ans = 0;
int n;

void find(ll x,ll y){
    cout<<"y:" << y<<"\n";
    if(x==n){
        ans += y;
        return;
    }

    ll cur = 0;
    for(ll i=x; i<n; i++){
        cur = (10*cur) + (s[i]-'0');
        cout << cur << "\n";
        find(i+1,y+cur);
    }
}
void solve(){
    cin >> s;
    n = s.size();
    find(0,0);
    cout << ans;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}