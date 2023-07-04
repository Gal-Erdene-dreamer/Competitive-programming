#include <bits/stdc++.h>

using namespace std;

int main(){
	string n;
	cin >> n;
	int a = 0, p = 1;
	for(int i = n.length() - 1; i >= 0; --i){
		a += p * (int(n[i]) - 64);
		p *= 26;
	}	
	cout << a;
	return 0;
}
