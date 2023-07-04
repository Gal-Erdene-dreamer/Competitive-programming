#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ar array
const int mxN=1e9;
int n;


void solve(){
    cin >> n;
    int a[n];
    int mN=mxN;
    int mnOdd=mxN;
    for(int i = 0; i < n; i++){
        cin >> a[i], mN=min(mN, a[i]);
        if(a[i]%2)
            mnOdd=min(mnOdd, a[i]);
    }
    
    bool ans = 1;
    
    for(int i = 0; i < n; i++){
        if(mN%2!=a[i]%2 && a[i]-mnOdd < 1){
            ans = 0; 
            break;
        }
    }
    cout << (ans ? "YES\n" : "NO\n");
}

int main(){

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}