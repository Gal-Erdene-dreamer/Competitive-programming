#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int c = 0;
    int n;
    if(s.size()%2==0)
        n = s.size()/2;
    else
        n = s.size()/2 - 1;
    for(int i = 0; i < n; i++){
        if(s[i] != s[i+1])
            c++;
    }
    if(c)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
}