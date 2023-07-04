#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, sum = 0;
	cin >> n;
	int m = n/2;
	if(n % 2 == 1)
		m++;
	for(int i = 2; i <= m; ++i){
			if(n / i < i){
				sum += (i - n/i - n%i);
				break;
			}
			sum += n / i;	
	}
	cout << sum + 1;
	return 0;
}
