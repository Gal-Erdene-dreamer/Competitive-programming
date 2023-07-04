#include <bits/stdc++.h>
using namespace std;
#define elif else if
#define ar array
using ll = long long;
const int MOD = 1e9+7;

const int mxN = 1e5;
int n, m;
vector<int> adj[mxN], ans;
bool vis[mxN] = {0};

void dfs(int u){
    vis[u] = 1;
    for(int v : adj[u]){
        if(!vis[v])
            dfs(v);
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> m;
    for(int i = 0, a, b; i < m; i++){
        cin >> a >> b, a--, b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            ans.push_back(i);
            dfs(i);
        }
    }

    cout << ans.size()-1 << "\n";
    for(int i = 1; i < (int) ans.size(); i++){
        cout << ans[0]+1 << " " << ans[i] + 1 << "\n";
    }
    
    return 0;
}