#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9) + 7;

void solve(){
    int N;
    cin >> N;
    int arr[N];
    /*
    double avr = 0;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
        avr+=arr[i];
    }
    int a = round(avr/N);
    int ans = 0;
    for(int i = 0; i < N; i++)
        ans+=(arr[i] - a) * (arr[i] - a);
    cout << ans;
    */

    for(int i=0;i<N;++i)
	{
		cin>>arr[i];
	}
	
	int ans=INT_MAX;
	for(int e=-100;e<=100;++e)
	{
		int cost=0;
		for(int i=0;i<N;++i)
		{
			cost+=(arr[i]-e)*(arr[i]-e);
		}
		ans=min(ans,cost);
	}
	cout<<ans<<"\n";
    
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}