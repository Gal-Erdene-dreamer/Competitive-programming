#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9)+7;

void solve(){
    string w;
    cin >> w;
    int ch[26] = {0};
    bool check = true;
    for(int i = 0; i < w.size(); i++){
        ch[w[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(ch[i]%2==1)
            check = false;
    }
    if(check)
        cout << "Yes";
    else
        cout << "No";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--) solve();
}