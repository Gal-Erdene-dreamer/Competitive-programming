#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9)+7;

void solve(){
    int n;
	cin >> n;
	for(int i = 1; i <= n; i += 2)
		cout << 2 * n - i + 1 << " " << i + 1 << " ";
	cout << "\n";
	for(int i = 1; i <= n; i += 2)
		cout << i << " " << i + n << " ";
	cout << "\n";
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}