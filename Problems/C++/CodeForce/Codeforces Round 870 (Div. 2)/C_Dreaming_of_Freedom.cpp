#include <bits/stdc++.h>
using namespace std;
#define elif else if
using ll = long long;
const int MOD = 1e9+7;

const int mxN = 1e5;
int n, m;

   
void solve(){
    cin >> n >> m;
    if(n < 2){
        cout << "YES\n";
    }
    else{
        if(n <= m)
            cout << "NO\n";
        else{
            bool f = true;
            int s = sqrt(n);
            for(int i = 2; i <= min(m, s+1); i++){
                if(n % i == 0){
                    f = false;
                    break;
                }
            }
            if(f)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}