#include<iostream>
using namespace std;
#define int64 long long int
int64 n,s;
bool chk(int64 n,int64 i,int64 s){
	int64 tot=0,x=n;
	while(x){
		tot+=x%i;
		x/=i;
	}
	return tot==s;
}
int64 calc(int64 n,int64 s){
	if(s>n)return -1;
	if(s==n)return n+1;
	for(int64 i=2; i*i<=n; i++){
		if(chk(n,i,s))return i;
	}
	int64 now = n-s, res = -1;
	for(int64 i=1; i*i<=now; i++)
		if(now%i==0){
			int64 x;
			// if(chk(n,x,s)){
			// 	if(res==-1 || res>x)
			// 		res=x;
			// }
			x=now/i+1;
			if(chk(n,x,s)){
				// if(res==-1 || res>x)
					res=x;
			}
		}
	return res;
}
int main(){
	cin>>n>>s;
	cout<<calc(n,s)<<endl;
	return 0;
}