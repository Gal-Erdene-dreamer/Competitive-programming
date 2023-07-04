#include <bits/stdc++.h>
using namespace std;
#define elif else if
using ll = long long;
const int MOD = 1e9+7;

const int mxN = 1e2;
string s, c = {"codeforces"};
   
void solve(){
    cin >> s;
    int ans = 0;
    for(int i = 0; i < 10; i++){
        if(s[i] != c[i])
            ans++;
    }

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