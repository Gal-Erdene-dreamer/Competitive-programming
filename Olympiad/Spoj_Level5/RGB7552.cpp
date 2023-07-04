#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, i, j;
	cin >> n;
	int a[n][n];
	int count;
	for(i = 0; i < n; ++i){
		cin >> a[0][i];
		for(j = 1; j < n; ++j){
			count = j;
			if(i - count < 0)
				count -= n;
			a[j][i - count] = a[0][i];
		}
	}
	for(i = 0; i < n; ++i){
		for(j = 0; j < n; ++j)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}
