#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9)+7;

void solve(){
    string s;
    cin >> s;
    int ans = 0;
    if(s[0] == '_')
        ans++;
    for(int i = 1; i < s.length(); i++){
        if(s[i-1] == '_' && s[i] == '_')
            ans++;
    }
    if(s[s.size() - 1] == '_')
        ans++;
    
    if(s[s.size()-1] == '^' && s.size() == 1)
        ans++;
    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}