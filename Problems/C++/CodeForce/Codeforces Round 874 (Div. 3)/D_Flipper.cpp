#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ar array
const int mxN=2e3;
int n;
int p[mxN];

template<typename T1,typename T2> bool cmin(T1 &x,const T2 &y) { if (y<x) { x=y; return 1; } return 0; }
template<typename T1,typename T2> bool cmax(T1 &x,const T2 &y) { if (x<y) { x=y; return 1; } return 0; }


void solve(){
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> p[i];

}

int main(){
        
    char c = 'a';
    cout << max(c, 'b');

    // int t;
    // cin >> t;
    // while(t--) solve();

    return 0;
}