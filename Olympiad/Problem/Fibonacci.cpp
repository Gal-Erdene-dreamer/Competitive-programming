#include <bits/stdc++.h>

using namespace std;

int main(){
	int n1 = 1, n2 = 1, n;
	cin >> n;
	while(n >= n1) {
		n2 = n1 + n2;
		n1 = n2 - n1;
	}
	cout << n2 - n1;
	return 0;
}
