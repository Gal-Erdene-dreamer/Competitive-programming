#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9) + 7;

int N;
ll B[200001], arr[200001];

void solve(){
    int q;
    cin >> N >> q;
    arr[0] = 0;
    for(int i = 1; i <= N; i++){
        cin >> arr[i];
        arr[i] ^= arr[i-1];
    }

    while(q--){
        int a, b;
        cin >> a >> b;
        cout <<(arr[b]^arr[a-1]) << "\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--) solve();
}