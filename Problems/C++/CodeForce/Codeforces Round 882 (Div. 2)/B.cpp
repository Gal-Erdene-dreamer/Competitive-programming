#include <bits/stdc++.h>
using namespace std;
#define ar array
using ll = long long;
using ld = long double;
using ull = unsigned long long;
const int mxN = 2*1e5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
int n, a[mxN];
void solve(){
    cin >> n;
    for(int i = 0; i < n; i++)  
        cin >> a[i];
    int res = INT_MAX;
    // for(int i = 1; i < n; i++)
    //     res&=a[i];
    int ans = 0;
    for(int i = 0; i < n; i++){
        if((res&a[i])==0){
            res=INT_MAX;
            ans++;
            continue;
        }
        res &= a[i];
    }
    if(ans==0)
        ans++;
    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}