#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ar array
int n;
string s;
int ans = 0;

void solve(){
    int n,m,i,j;
    set<string> s;
    string t;
    cin>>n>>t;
    for (i=1; i<n; i++) s.insert(t.substr(i-1,2));
	cout<<s.size()<<'\n';

}

int main(){

    int t;
    cin >> t;
    while(t--) solve();
}