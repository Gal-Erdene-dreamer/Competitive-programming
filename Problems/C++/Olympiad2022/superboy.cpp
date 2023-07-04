#include <iostream>
using namespace std;

int main() {
	int n,i,j,k;
	long a[100];
	int b[100] ;
	cin >> n ;
	a[1]=1;
	cin>>k;
	for(j=0;j<k;j++){
	cin>>b[j];
	}
	
	j=0;
	cout<<"\n";
	for(i=1;i<=n;i++){
		if(i==b[j]){
			a[i]=0;
			if(k>j) {j++;}
		}
		else if (i==2){
		a[i]=a[i-1]+1;
		}
		else if (i==3){
		a[i]=a[1]+a[2]+1;
		}
		else if(i>3){
			a[i]=a[i-1]+a[i-2]+a[i-3];
		}
	}
	cout <<"\n"<< a[n];
	return 0;
}
