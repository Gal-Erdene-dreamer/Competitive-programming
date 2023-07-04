#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    char c[n];
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> c[i];
        string s;
        cin >> s;
        a[i] = stoi(s, nullptr, 2);
    }
    int ans = 0;
    for(int i = 0; i < 32768; i++){
        int p = 0;
        for(int j = 0; j < n; j++){
            int k = __builtin_popcount(a[j]&i);
            if(k && c[i]=='L'){
                p--;
            }
            else if(k && c[i]=='R'){
                p++;
            }
            else if(c[i] == 'L' && k==0)
                p++;  
        }
        ans = max(p, ans);
    }
    cout << ans << "\n";
}

int main(){
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   int t; 
   cin >> t;
   while(t--) solve();
   return 0;
}
