#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9) + 7;

bool cmp(string a, string b){
    return a < b;
}

void solve(){
    int n, l;
    cin >> n >> l;
    string s[n];
    for(int i = 0; i < n; i++)
        cin >> s[i];
    
    sort(s, s+n);

    for(int i = 0; i < n; i++)
        cout << s[i];
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t=1;
    // cin >> t;
    while(t--) solve();

    return 0;
}