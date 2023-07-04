#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, a;
	cin >> k >> n;
	a = k % n;
	if(k == 1)
		cout << k + 1 << " " << k + n;
	else if(k == n)
		cout << k + n << " " << k - 1;
	else if(k == (n * n - (n - 1)))
		cout << k - n << " " << k + 1;
	else if(k == n * n)
		cout << k - n << " " << k - 1;
	else if(a == 1)
		cout << k - n << " " << k + 1 << " " << k + n;
	else if(a == 0)
		cout << k - n << " " << k + n << " " << k - 1;
	else if(k < n)
		cout << k + 1 << " " << k + n << " " << k - 1;
	else if(k > n * (n - 1) && k < n * n)
		cout << k - n << " " << k + 1 << " " << k - 1;
	else
		cout << k - n << " " << k + 1 << " " << k + n << " " << k - 1;
	return 0;
}
