#include <bits/stdc++.h>
using namespace std;
#define elif else if
using ll = long long;
const int MOD = 1e9+7;

const int mxN = 1e2;
int n, arr[mxN];
   
void solve(){
    cin >> n;
    int ans = 0;
    int c = 0;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++){
        ans = max(ans, c);
        if(arr[i] == 0)
            c++;
        else
            c = 0; 
    }
    ans = max(ans, c);
    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr), cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--) 
        solve();
    return 0;
}