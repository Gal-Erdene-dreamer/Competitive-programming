#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9)+7;

void solve(){
    int n, d;
    cin >> n >> d;
    char c;
    int a = 0;
    for(int i = 0; i < n; i++){
        cin >> c;
        if(c < d + '0' && a==0){
            a++;
            cout << d;
            cout << c;
        }
        else
            cout << c; 
    }
    if(a==0)
        cout << d;
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}