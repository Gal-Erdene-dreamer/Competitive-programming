#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9)+7;

void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    if(n%2==0){
        if(arr[0] > arr[1] && arr[n-2] > arr[n-1])
            cout << "NO";
        else
            cout << "YES";
    }else
        cout << "YES";
    
    
    cout << "\n";
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}