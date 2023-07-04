#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	long long int m = pow(10, n - 1);
	m = sqrt(m) + 1;
	long long int d, e;
	long long int a = pow(10, n / 2);
	while(m < a){
		d = m * m % a;
		e = m * m / a;
		if(d+e == m)
			cout << m * m << endl;	
		m++;
	}
	return 0;
}
