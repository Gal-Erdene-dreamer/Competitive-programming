#include <bits/stdc++.h>
using namespace std;
#define elif else if
using ll = long long;
const int MOD = 1e9+7;

const int mxN = 1e3;
int n, m;
int arr[mxN][mxN];
bool e(int i, int j){
    return i>=0&&i<n&&j>=0&&j<m&&arr[i][j]!=0;
}
int c;
void dfs(int i, int j){
    c+=arr[i][j];
    arr[i][j] = 0;
    if(e(i-1, j))
        dfs(i-1, j);
    if(e(i, j-1))
        dfs(i, j-1);
    if(e(i+1, j))
        dfs(i+1, j);
    if(e(i, j+1))
        dfs(i, j+1);
}
   
void solve(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(e(i, j)){
                c = 0;
                dfs(i, j);
                ans = max(ans, c);
            }
        }
    }
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