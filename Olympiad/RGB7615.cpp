#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, min;
	cin >>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	min = abs(a[0] - a[1]); 
	for(int i = 0; i < n - 1; i++){
		if(min > abs(a[i] - a[i+1])){
			min = abs(a[i] - a[i+1]);
		}
	}
	if(n == 1)
		min = 0;
	cout << min;
	
}
