#include <bits/stdc++.h>
using namespace std;
#define elif else if
#define ar array
using ll = long long;
const int MOD = 1e9+7;

const int mxN = 1e5;
int n, m, p[mxN];
vector<int> adj[mxN], ans;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> m;
    for(int i = 0, a, b; i < m; i++){
        cin >> a >> b, a--, b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(p, -1, sizeof(n) * n);
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v : adj[u]){
            if(p[v] < 0){
                p[v]=u;
                q.push(v);
            }
        }
    }
    if(p[n-1] < 0){
        cout << "IMPOSSIBLE";
    }else{
        int u = n-1;
        while(u){
            ans.push_back(u);
            u = p[u];
        }
        ans.push_back(0);
        reverse(ans.begin(), ans.end());
        cout << ans.size() << "\n";
        for(auto i : ans)
            cout << i+1 << " ";
    }
    
    return 0;
}