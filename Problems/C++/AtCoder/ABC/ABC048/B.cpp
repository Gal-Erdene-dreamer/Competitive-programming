#include <bits/stdc++.h>
using namespace std;
#define ar array
using ll = long long;
using ld = long double;
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll a, b, x;
    cin >> a >> b >> x;
    ll ans = b/x - a/x;
    if(a%x) ans--;
    ans++;
    cout << ans << "\n";
    return 0;
}
