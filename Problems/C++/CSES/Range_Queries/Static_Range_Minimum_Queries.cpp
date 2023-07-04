#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9)+7;

void solve(){
    int n, q;
    cin >> n >> q;
    ll arr[n];
    int LOG = int(log2(n));
    ll m[n][LOG+1];
    for(int i = 0; i < n; i++){ 
        cin >>  arr[i];
        m[i][0] = arr[i];
    }
    
    for(int j = 1; j < LOG+1; j++){ 
        for(int i = 0; i + (1 << j) - 1 < n; i++){
            m[i][j] = min(m[i][j-1], m[i+(1<<(j-1))][j-1]);
        }
    }

    // for(int j = 0; j < LOG+1; j++){ 
    //     for(int i = 0; i + (1 << j) - 1 < n; i++){
    //         cout << "i=" << i << " j=" << j << " m=" << m[i][j] << " "; 
    //     }
    //     cout << "\n";
    // }
    while(q--){
        int a, b;
        cin >> a >> b;
        int k = int(log2(b - a + 1));
        cout << min(m[a-1][k], m[b-(1 << k)][k]) << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}