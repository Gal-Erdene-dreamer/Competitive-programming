#include <bits/stdc++.h>

using namespace std;

int main (){
	long long n;
	cin >> n;
	long long res = 0, m = n, i;
	for(i = 2; i <= n; ++i){
		if(i == m){
			res = m+1;
			break;
		}
		else if(n % i == 0){
			res+=i;
			n/=i;
			i = 1;
		}	
	}
	if(m == 1)
		res = 2;
	cout << res;
	return 0;
}
