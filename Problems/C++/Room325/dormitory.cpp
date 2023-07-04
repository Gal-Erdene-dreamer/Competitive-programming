#include <bits/stdc++.h>
using namespace std;

#define elif else if
typedef long long ll;
const int MOD = int(1e9) + 7;


void solve(){
    ll n, k, x, y;
    cin >> n >> k >> x >> y;
    ll room = (n/k) * x + (n- (n/k)) * y;
    ll re = x + (k-1) * y;
    ll r = (k-1) * y;
    int q;
    cin >> q;
    while(q--){
        ll a;
        cin >> a;
        a %= room;
        if(a == 0)
            a = room;
        ll c = k * (a / re);
        a %= re;
        if(a > r)
            c+=k;
        else{
            if(a%y==0)
                c+=a/y;
            else
                c+=1+(a/y);
        }
        cout << c << "\n";
    }
    
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t = 1;
    // cin >> t;
    while(t--) solve();
}