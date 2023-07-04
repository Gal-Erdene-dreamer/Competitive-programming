#include <bits/stdc++.h>
using namespace std;
#define elif else if
using ll = long long;
const int MOD = int(1e9)+7;

void solve(){
    set<int> a;
    for (int i = 0; i < 3; ++i) {
        int x;
        cin >> x;
        a.insert(x);
    }
    cout << a.size() << endl;

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--) solve();

    return 0;
}