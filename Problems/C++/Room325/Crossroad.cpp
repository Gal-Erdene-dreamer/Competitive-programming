#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define elif else if

const int MOD = int(1e9) + 7;

void solve(){
    int n;
    cin >> n;
    queue<int> q[4];
    int t[n];
    char d[n];
    for (int i = 0; i < n; i++){
        cin >> t[i] >> d[i];
    }
    for(int i = 0; i < n-1; ++i){
        if(t[i] == t[i+1]){
            if(t[i] == t[i+2]){
                
            }
        }
    }
    int c = 0;
    for (int i = 0; i < n; i++){
        
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}