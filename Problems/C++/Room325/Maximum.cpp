#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9) + 7;

int n;
ll a[100001], b[100001];
vector <ll> resA[1000001];
vector <ll> resB[1000001];

void solve(){
    cin >> n;
    ll xorA = 0, xorB = 0;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        xorA ^= a[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> b[i];
        xorB ^= b[i];
    }

    ll MAX = 0;
    for(int i = 1; i <= resA[n-1].size(); i++){
        MAX = max(MAX, resA[n-1][i]+resB[n-1][i]);
    }
    cout << MAX << "\n";
    vector<int> swapped;
    // for(int i = 0; i < n; ++i){
    //     if(a[i] > b[i]){
    //         xorA ^= b[i];
    //         xorB ^= a[i];
    //     }else{
    //         xorA ^= a[i];
    //         xorB ^= b[i];
    //     }
    //     // if(MAX < xorA + xorB){
    //     //     MAX = xorA + xorB;
    //     //     swapped.push_back(i+1);
    //     // }
    // }

    // cout << xorA + xorB << " " << swapped.size() << "\n";
    // for(auto i : swapped)
    //     cout << i << " ";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}