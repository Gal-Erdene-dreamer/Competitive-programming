#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9) + 7;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int mxm = 100001;
vector<int> c[mxm+1];
vector<int> fr[mxm+1];
int cod[mxm+1];
void bfs(int a, int id){
  queue<int> q;
  if(c[a].empty()) return;
  q.push(a);
  while(!q.empty()){
    int s = q.front(); q.pop();
    for(int u:c[s]){
      if(cod[u] == id) continue;
      cod[u] = id;
      q.push(u);
    }
  }
}
ll curId = 0;
void preProcess(){
  memset(cod, -1, sizeof(cod));
  for(int i = 0;i<=mxm;i++){
    if(cod[i] == -1 && !c[i].empty()){
      cod[i] = curId;
      bfs(i, curId);
      curId++;
    }
  }
}
void solve(){
  int n, m, k;
  cin>>n>>m>>k;
  int a, b;
  for(int i = 0;i<m;i++){
    cin>>a>>b;
    fr[a].push_back(b);
    fr[b].push_back(a);
  }
  for(int i = 0;i<k;i++){
    cin>>a>>b;
    c[a].push_back(b);
    c[b].push_back(a);
  }
  preProcess();
  int q;
  cin>>q;
  char op;
  while(q--){
    cin>>op;
    if(op == 'F'){
      cin>>a>>b;
      fr[a].push_back(b);
      fr[b].push_back(a);
    }
    else if(op == 'T'){
      cin>>a>>b;
      c[a].push_back(b);
      c[b].push_back(a);
      if(cod[a] == -1 && cod[b] == -1){
        curId++;
        cod[a] = curId;
        cod[b] = curId;
        curId++;
      }
      if(cod[a] == -1) cod[a] = cod[b];
      else if(cod[b] == -1) cod[b] = cod[a];
      else bfs(a, max(cod[a], cod[b]));
    }
    else{
      cin>>a;
      int res = 0;
      if(cod[a] == -1 || fr[a].empty() || c[a].empty()){
        cout<<0<<"\n";
        continue;
      }
      for(int it:fr[a]){
        if(cod[it] == cod[a]){
          res++;
        }
      }
      cout<<res<<"\n";
    }
  }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
