#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9) + 7;

void solve(){
    string s[3];
    cin>>s[0]>>s[1]>>s[2];
    int t = 0;
    while(true){
        if(s[t].size() == 0){
            // cout<<(char)(t+'A');
            cout << "ABC"[t];
            return;
        }
        char c = s[t][0];
        s[t].erase(s[t].begin());
        t = c-'a';
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}