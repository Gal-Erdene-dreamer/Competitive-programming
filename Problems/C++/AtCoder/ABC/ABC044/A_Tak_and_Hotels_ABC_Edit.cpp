#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9)+7;

void solve(){
    int N, K, X, Y;
    cin >> N >> K >> X >> Y;
    if(N > K)
        cout << K * X + (N-K) * Y;
    else
        cout << N * X;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--) solve();
}