#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
	if(b == 0)
		return a;
	else
		return gcd(b, a % b);
}
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	cout << gcd(b - a, c - b);
	return 0;
}
