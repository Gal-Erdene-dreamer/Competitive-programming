#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, q;
	cin>>n>>q;
	int arr[n][n];
	
	for(int i=0; i < n; i++){
		for(int j = 0; j < n; j++){
			arr[i][j] = (i+1)+(j+1);
		}
	}
	
	for(int i = 0; i < q; i++){
		int a, sum = 0;
		char c;
		cin>>c>>a;
		if(c=='R'){
			for(int j = 0; j < n; j ++){
				sum += arr[a-1][j];
				arr[a-1][j] = 0;
			}
			cout<<sum<<endl;
		}else if(c=='C'){
			for(int j = 0; j < n; j ++){
				sum += arr[j][a-1];
				arr[j][a-1] = 0;
			}
			cout<<sum<<endl;
		}	
	}
	return 0;	
}
