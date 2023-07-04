#include <bits/stdc++.h>
using namespace std;
#define elif else if
using ll = long long;
const int MOD = 1e9+7;

const int mxN = 1e5;
int n, a[mxN];

   
void solve(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
 
    int m = 0;
    for(int j = 0; j < n/2; j++){
        if(a[j] != a[n-j-1]){
            m = __gcd(m, abs(a[j]-a[n-j-1]));
        }
    }
    cout << m << "\n";
}

int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}