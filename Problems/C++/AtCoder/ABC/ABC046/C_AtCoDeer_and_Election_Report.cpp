#include <bits/stdc++.h>
using namespace std;
#define elif else if
using ll = long long;
using ld = long double;
const int MOD = int(1e9)+7;
ld const PI = 3.141592653589793238462643L;
bool is_prime(ll x) { if (x <= 1) return 0; for (ll y = 2; y * y <= x; ++y) if (x % y == 0) return 0; return 1; }
ll sqr(int a) { return (ll) a * a; } ld sqr(ld a) { return a * a; } ll sqr(ll a) { return a * a; }
ll gcd(ll a, ll b) { while (b > 0) { ll t = a % b; a = b; b = t; } return a; }

void solve(){
    int N;
    cin >> N;
    ll a = 1;
    ll b = 1;
    for(int i = 0, x, y; i <= N; i++){
        cin >> x >> y;
        ll c1 = (a + x - 1) / x;
        ll c2 = (b + y - 1) / y;
        ll c = max(c1, c2);
        a = x * c;
        b = y * c;
    }
    cout << a+b <<'\n';
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--) solve();

    return 0;
}