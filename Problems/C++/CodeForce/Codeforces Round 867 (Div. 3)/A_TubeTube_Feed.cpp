#include <bits/stdc++.h>
using namespace std;
#define elif else if
using ll = long long;


void solve(){
    int t, n; 
    cin >> n >> t;
    int e[n], arr[n];
    int ans = -1;
    for(int i = 0; i < n; i++){
        cin >> e[i];
    }
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int enter = 0;
    for(int i = 0; i < n; i++){
        if(e[i] <= t){
            if(enter < arr[i]){       
                enter = arr[i];
                ans = i+1;
            }
        }
        t--;
    }
    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}