#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9) + 7;

void solve(){
    string s;
    cin >> s;
    string ans = "";
    for(char c: s){
        if(c=='B'){
            if(!ans.empty()) ans.pop_back();
        }
        else ans.push_back(c);
    }
    cout << ans;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}