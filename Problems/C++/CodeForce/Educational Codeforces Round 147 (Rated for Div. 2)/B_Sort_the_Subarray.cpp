#include <bits/stdc++.h>
using namespace std;
#define elif else if
using ll = long long;
const int MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    int a[n], as[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> as[i];
    
    int l = 0;
    for(int i = 0;i<n; i++){
        if(a[i] != as[i]){
            l = i;
            break;
        }
    }
    int r = n-1;
    for(int i = n-1; i>=0; i--){
        if(a[i] != as[i]){
            r=i;
            break;
        }
    }
    

    for(int i = l;i>0; i--){
        if(as[i] >= as[i-1]){
            l = i-1;
        }else
            break;
    }
    for(int i = r;i < n-1; i++){
        if(as[i] <= as[i+1]){
            r = i+1;
        }else
            break;
    }

    cout << l+1 << " " << r+1 << "\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
