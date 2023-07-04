#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9)+7;


void solve(){
    ll dp[55][2555]; 
    ll n, A, x[100];
    cin >> n >> A;
	for(int i=1; i<=n; i++)
		cin >> x[i];

	dp[0][0]=1;
	int tot=0;
	for(int i=1; i<=n; i++){
		for(int i2=i-1; i2>=0; i2--)
		    for(int j=tot; j>=0; j--)
			    dp[i2+1][j+x[i]]+=dp[i2][j];
		tot+=x[i];
	}
	ll sum=0;
	for(int i2=1; i2<=n; i2++)
		sum+=dp[i2][i2*A];
	cout << sum << "\n";
    
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--) solve();
}