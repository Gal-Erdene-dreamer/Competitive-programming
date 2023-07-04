#include <bits/stdc++.h>
using namespace std;
#define elif else if
#define ar array
using ll = long long;
const int MOD = 1e9+7;

const int mxN = 1e5;
int n, m;
priority_queue<ar<ll, 2>> q;
ll dis[mxN+1];
vector <ar<int, 2>> adj[mxN+1];
bool processed[mxN+1];

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        // adj[b].push_back({a, c});
    }
    for(int i = 1; i <= n; i++)
        dis[i] = INT64_MAX;
    
    dis[1] = 0;

    q.push({0,1});
    while (!q.empty()) {
        ar<ll, 2> a = q.top(); q.pop();
        if (processed[a[1]]) continue;
        processed[a[1]] = true;
        for (auto u : adj[a[1]]) {
            int b = u[0], w = u[1];
            if (dis[a[1]]+w < dis[b]) {
                dis[b] = dis[a[1]]+w;
                q.push({-dis[b],b});
            }
        }
    }

    for(int i = 1;i<=n;i++) 
        cout << dis[i] << " ";
    return 0;
}