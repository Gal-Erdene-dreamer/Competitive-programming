#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b;
	cin >> c;
	int n, m;
	n = a/c;
	m = b/c;
	if(a % c != 0)
		n++;
	if(b % c != 0)
		m++;
	cout << n * m;
	return 0;
}
