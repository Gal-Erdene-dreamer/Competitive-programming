#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9)+7;

void solve(){
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    int c = min(min(x1, n-x1+1), min(y1, n-y1+1));
    int d = min(min(x2, n-x2+1), min(y2, n-y2+1));
    cout << abs(c-d) << "\n";  
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}