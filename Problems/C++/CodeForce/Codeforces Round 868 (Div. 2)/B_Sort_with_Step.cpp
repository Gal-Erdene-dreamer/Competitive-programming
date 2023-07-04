#include <bits/stdc++.h>
using namespace std;
#define elif else if
#define ar array
using ll = long long;

const int mxN = 2* 1e5 + 1;

int n, k;
int p[mxN];
void solve(){
    cin >> n >> k;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        cin >> p[i];
        if(p[i] % k != i % k)
            ans++;
    }
    if(ans > 2)
        cout << "-1\n";
    elif(ans==2)
        cout << "1\n";
    else
        cout << "0\n";

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--) solve();

    return 0;
}