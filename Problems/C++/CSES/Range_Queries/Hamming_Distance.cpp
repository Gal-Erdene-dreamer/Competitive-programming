#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9) + 7;


void solve(){
    int N, k;
    cin >> N >> k;
    int arr[N];
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        arr[i] = stoi(s, 0, 2);
    }
    
    int res = k; 
    for(int i = 0; i < N; i++)
        for(int j = i+1; j < N; j++)
            res = min(res,__builtin_popcount(arr[i]^arr[j]));
        
    cout << res;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--) solve();

    return 0;
}