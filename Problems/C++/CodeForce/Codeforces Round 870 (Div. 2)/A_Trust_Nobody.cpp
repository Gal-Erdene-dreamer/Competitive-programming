#include <bits/stdc++.h>
using namespace std;
#define elif else if
using ll = long long;
const int MOD = 1e9+7;

const int mxN = 1e2;
int n, l[mxN];
bool f;
   
void solve(){
    cin >> n;
  
    for(int i = 0; i < n; i++)
        cin >> l[i];
    
    f = false;
    for(int i = 0; i <= n; i++){
        int c = 0;
        for(int j = 0; j < n; j++){
            if(l[j] <= i)
                c++;
        }
        if(n-c == i){
            f = true;
            cout << i << "\n";
            break;
        }
    }
    if(!f)
        cout << "-1\n";
}

int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr), cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--) 
        solve();
    return 0;
}