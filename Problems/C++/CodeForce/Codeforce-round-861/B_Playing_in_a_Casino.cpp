#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz(x) ((ll)(x).size())
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define pb push_back


int n,m;

void ahcorz(){
    cin >> n >> m;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0; i<n; ++i) for(int j=0; j<m; ++j) cin >> a[i][j];
    ll res=0;
    for(int j=0; j<m; ++j){
        vector<int> vec(n);
        for(int i=0; i<n; ++i) vec[i]=a[i][j];
        sort(all(vec));
        for(int i=0; i<n; ++i) res+=1ll*(i+i-(n-1))*vec[i];
    }
    cout << res << "\n";
}

signed main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t; cin >> t;
    while(t--) ahcorz();
}