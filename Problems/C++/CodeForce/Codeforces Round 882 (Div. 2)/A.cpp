#include <bits/stdc++.h>
using namespace std;
#define ar array
using ll = long long;
using ld = long double;
using ull = unsigned long long;
const int mxN = 1e2;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
int n, k, a[mxN];

void solve(){
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n-1; i++)
        a[i] = abs(a[i]-a[i+1]);
    // for(int i = 0; i < n; i++){
    //     cout << a[i] << " ";
    // }
    sort(a, a+n-1);
    // for(int i = 0; i < n; i++){
    //     cout << a[i] << " ";
    // }

    // cout << "\n";
    int ans = 0;
    for(int i = 0; i < n-k; i++)
        ans+=a[i];
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}