#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int n = 0;
	for(int i = 0; i < s.length(); ++i){
		n += s[i] - 48;
	}
	int k;
	while(n >= 10){
		k = 0;
		while(n > 0){
			k += n % 10;
			n /= 10; 
		}
		n = k;
	}
	cout << n;
	return 0;
}
