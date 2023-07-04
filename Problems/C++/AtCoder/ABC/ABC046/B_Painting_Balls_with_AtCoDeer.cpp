#include <bits/stdc++.h>
using namespace std;
#define elif else if
using ll = long long;
const int MOD = int(1e9)+7;

void solve(){
    int N, K;
    cin >> N >> K;
    ll res = K;
    for(int i = 1; i < N; i++){
        res*=(K-1);
    }

    cout << res;

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--) solve();

    return 0;
}