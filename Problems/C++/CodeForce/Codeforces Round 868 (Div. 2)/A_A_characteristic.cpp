#include <bits/stdc++.h>
using namespace std;
#define elif else if
#define ar array
using ll = long long;

int n, k;
void solve(){
    cin >> n >> k;
    int c = 0;
    bool ans = false;
    for(int i = n; i >= 0; i--){
        int A = i * (i-1)/2 + (n-i)*(n-i-1)/2;
        if(A == k){
            ans = true;
            c = n-i;
            break;
        }
    }
    if(ans){
        cout << "YES\n";
        for(int i = 0; i < n; i++){
            if(c==0){
                cout << 1 << " ";
                continue;
            }
            cout << -1 << " ";
            c--;
        }
    }else
        cout << "NO";  
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--) solve();

    return 0;
}