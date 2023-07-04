#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m], c[n+m];
	int i, count = 0, count2 = 0, j = 0;
	for(i = 0; i < n; i++){
		cin >> a[i];
		for(j = 0; j < count; j++){
			if(c[j] == a[i])
				count2++;
		}
		if(count2 == 0){
			c[count] = a[i];
			count++;
		}
		else
			count2 = 0;
	}
	for(i = 0; i < m; i++){
		cin >> b[i];	
		for(j = 0; j < count; j++){
			if(c[j] == b[i])
				count2++;
			
		}
		if(count2 == 0){
			c[count] = b[i];
			count++;
		}
		else
			count2 = 0;
	}
	for(i = 0; i < count; i++){
		cout << c[i] << " ";
	}
	
	return 0;
}
