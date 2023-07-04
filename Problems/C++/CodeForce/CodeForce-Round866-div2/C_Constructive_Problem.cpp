#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef vector<int> VI;
typedef basic_string<int> BI;
typedef long long ll;
typedef pair<int,int> PII;
typedef double db;
mt19937 mrand(random_device{}()); 
const ll mod=1000000007;
int rnd(int x) { return mrand() % x;}
ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
// head

const int N=301000;
int n,a[N];
int mex(VI a) {
	set<int> px(a.begin(),a.end());
	int m=0;
	while (px.count(m)) ++m;
	return m;
}

bool solve() {
	scanf("%d",&n);
	rep(i,0,n) {
		scanf("%d",&a[i]);
	}
	int m=mex(VI(a,a+n));
	int l=-1,r=-1;
	rep(i,0,n) 
        if (a[i]==m+1) {
		if (l==-1) l=i;
		r=i;
	}
	if (l!=-1) {
		rep(i,l,r+1) a[i]=m;
		return mex(VI(a,a+n))==m+1;
	} else {
		return m!=n;
	}
}

int t;
int main() {
	for (scanf("%d",&t);t;t--) {
		puts(solve()?"Yes":"No");
	}
}
