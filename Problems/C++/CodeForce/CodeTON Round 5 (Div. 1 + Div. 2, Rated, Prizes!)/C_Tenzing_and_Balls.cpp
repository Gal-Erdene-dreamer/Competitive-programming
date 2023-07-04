#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fi first
#define se second
#define pii pair<long long,long long>
#define mp make_pair
#define pb push_back
const int mod=998244353;
const int inf=0x3f3f3f3f;
const int INF=1e18;
int n,a[1000005],dp[1000005],maxx[1000005];
void solve()
{
    cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=0;i<=n;i++) dp[i]=maxx[i]=-inf;
	dp[0]=0;
	for(int i=1,prv=0;i<=n;i++)
	{
		dp[i]=prv;
		dp[i]=max(dp[i],i+maxx[a[i]]);
		maxx[a[i]]=max(maxx[a[i]],dp[i-1]-(i-1));
		prv=max(prv,dp[i]);
	}
	cout<<dp[n]<<"\n";
}
signed main()
{
	int _=1;
	cin>>_;
	while(_--) solve();
	return 0;
}