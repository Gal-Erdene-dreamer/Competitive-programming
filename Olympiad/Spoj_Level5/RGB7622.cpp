#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, sum = 1, i;
	cin >> n >> k;
	for(i = 2; i <= n; ++i){
		if(n % i == 0)
			sum+= n / i;
		else
			sum += (n / i + n % i - 1);
		cout << sum << endl;
	}
	cout << sum % k;
	return 0;
}
