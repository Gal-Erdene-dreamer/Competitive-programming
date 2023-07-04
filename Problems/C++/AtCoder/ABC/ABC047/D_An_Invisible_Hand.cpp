#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define elif else if
const int mxN = 1e5;
ll N, T, A[mxN];
int main(){
    cin >> N >> T;
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    ll buy = INT_MAX, sell = 0;
    for(int i = 0; i < N; i++){
        buy = min(buy, A[i]);
        sell = max(sell, A[i]-buy);
    }
    //sell хамгийн ихээр олох боломжтой ашиг
    ll m = A[0];
    int ans=0;
    for(int i = 1; i < N; i++){
        if(A[i] < m){
            m = A[i];
        }
        if((A[i] - m) == sell){
            ans++;
            m = A[i];
        }
    }
    cout << ans;
    /*
    for(i=1;i<=n;i++)
	{
		cin>>a[i];
        //b[i] нь тухайн a[i]-дээр олж болох max ашиг
		b[i]=a[i]-w;
		q=max(q,b[i]);
		w=min(w,a[i]);
	}
	for(i=1;i<=n;i++)if(b[i]==q)e++;
	cout<<e;
    */
}