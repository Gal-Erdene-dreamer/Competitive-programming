#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9)+7;

const int N=200005;
int n, a[N], b[N];
void solve(){
	cin>>n;
	for(int i=1;i<n;i++) cin>>b[i];
	a[1]=b[1],a[n]=b[n-1];
	for(int i=1;i<n-1;i++){
		if(b[i]==b[i+1]){
			a[i+1]=b[i+1];
		}
		else a[i+1]=min(b[i],b[i+1]);
	}
	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
	cout<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}