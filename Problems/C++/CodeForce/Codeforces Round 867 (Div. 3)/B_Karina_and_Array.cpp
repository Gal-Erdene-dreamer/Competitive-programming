#include <bits/stdc++.h>
using namespace std;
#define elif else if
using ll = long long;


void solve(){
    int n;
    cin >> n;
    ll arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cout << max(arr[0] * arr[1], arr[n-1] * arr[n-2]) << "\n";
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}