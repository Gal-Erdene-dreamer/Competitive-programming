#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define elif else if
#define sz(x) ((ll)(x).size())
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define pb push_back
const int MOD = int(1e9) + 7;

void solve(){
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    vector<int> dp(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    

    dp[0] = arr[0];
    for(int i = 1; i < n; i++)
        dp[i] = min(dp[i-1]+1, arr[i]);

    for(int i = n-2; i >= 0; i--)
        dp[i] = min(dp[i+1]+1, dp[i]);
    

    while(q--){
        char c;
        cin >> c;
        if(c == '1'){
            int k, v;
            cin >> k >> v;
            arr[k-1] = v;
            dp[0] = arr[0];
            for(int i = 1; i < n; i++)
                dp[i] = min(dp[i-1]+1, arr[i]);

            for(int i = n-2; i >= 0; i--)
                dp[i] = min(dp[i+1]+1, dp[i]);
        }
        else {
            int k;
            cin >> k;
            cout << dp[k-1] << "\n";
        }
    }
}   

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    // freopen("calcInput.txt", "r", stdin);
    // freopen("calcOutput.txt", "w", stdout);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}