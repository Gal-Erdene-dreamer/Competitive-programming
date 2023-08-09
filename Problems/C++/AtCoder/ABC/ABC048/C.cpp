#include <bits/stdc++.h>
using namespace std;
#define ar array
using ll = long long;
const int mxN = 1e5;

ll a[mxN];
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll n, x;
    cin >> n >> x;
    for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	ll prev = a[0], ans = 0;
	for(int i = 1; i < n; i++){
		if(prev+a[i] > x){
			ans+=prev+a[i]-x;
			prev = max(x-prev, (ll)0);
			continue;
		}
		prev = a[i];
	}
	cout << ans << "\n";
    return 0;
}
