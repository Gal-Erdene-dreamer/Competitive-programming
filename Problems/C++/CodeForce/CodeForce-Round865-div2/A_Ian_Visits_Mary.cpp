#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9)+7;

void solve(){
    int a, b;
    cin >> a >> b;
    if(__gcd(a, b) == 1)
        cout << "1\n" << a << " " << b << "\n";
    else
        cout << "2\n" << 1 << " " << b-1 << "\n" << a << " " << b << "\n";
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}