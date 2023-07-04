#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin >> n;
    ll arr[n];
    for(int i = 0; i < n; ++i)
        cin >> arr[i];

    ll best = 0, sum;
    for(int i = 0; i < n; ++i){
        sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j] * (j-i+1);
            best = max(best, sum);
        }
    }
    cout << best << "\n";
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while(t--) solve();
    return 0;
}
