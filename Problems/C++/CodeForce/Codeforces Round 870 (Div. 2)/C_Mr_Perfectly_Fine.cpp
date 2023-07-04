#include <bits/stdc++.h>
using namespace std;
#define elif else if
using ll = long long;
const int MOD = 1e9+7;

const int mxN = 2 * 1e5;
int n, m[mxN];
string s[mxN];
   
void solve(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> m[i];
        cin >> s[i];
    }
    int ans1 = INT32_MAX, ans0 = INT32_MAX;
    int ans = INT32_MAX;
    for(int i = 0; i < n; i++){
        if(s[i][0] == '1' && s[i][1] == '1'){
            ans = min(m[i], ans);
        }
        else{
            if(s[i][0] == '1'){
                if(ans0 == INT32_MAX)
                    ans0 = m[i];
                else
                    ans0 = min(ans0, m[i]);
            }
            if(s[i][1] == '1'){
                if(ans1 == INT32_MAX)
                    ans1 = m[i];
                else
                    ans1 = min(ans1, m[i]);
            }
            if(ans0 != INT32_MAX && ans1 != INT32_MAX)
                ans = min(ans, ans0+ans1);
        }
    }
    if(ans == INT32_MAX)
        cout << "-1\n";
    else    
        cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr), cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--) 
        solve();
    return 0;
}