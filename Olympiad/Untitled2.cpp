#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m], c[];
	int i, count = 0;
	for(i = 0; i < n; i++){
		cin >> a[i];
		c[i] = a[i];
	}
	for(i = 0; i < m; i++){
		cin >> b[i];	
		for(int j = 0; j < n; j++){
			if(c[j] != b[i]){
				c[count + n] = b[i];
				count++;
			}
		}
	}
	cout << c << endl;
	cout << count;
	
	return 0;
}
