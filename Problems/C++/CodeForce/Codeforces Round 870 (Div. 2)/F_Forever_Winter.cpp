#include <bits/stdc++.h>
using namespace std;
#define elif else if
using ll = long long;
const int MOD = 1e9+7;

const int mxN = 1e3;
int n, m;

void solve(){
    cin >> n >> m;
    vector <int> adj[n];
    for(int i = 0, a, b; i < m; i++){
        cin >> a >> b; a--, b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // queue<int> qu;
    // qu.push(0);
    // bool vis[n] = {0};
    // int y = 0;
    // while(!qu.empty()){
    //     int a = qu.front();
    //     qu.pop();
    //     for(int v : adj[a]){
    //         if(adj[a].size() == 1)
    //             y = adj[v].size()-1;
    //         if(vis[v]) continue;
    //         vis[v] = 1;
    //         qu.push(v);
    //     }
    // }
    int y = 0;
    for(int i = 0; i < n; i++){
        if(y != 0)
            break;
        if(adj[i].size() == 1){
            y = adj[adj[i].front()].size() - 1;
        }
    }
    cout << m/(y+1) << " " << y << "\n";
}   

int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr), cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--) 
        solve();
    return 0;
}