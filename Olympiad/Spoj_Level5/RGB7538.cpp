#include <bits/stdc++.h>

using namespace std;

int main(){
	string n1, n2;
	cin >> n1;
	cin >> n2;
	char result[10001];
	int i;
	for(i = 0; i < n1.length(); i++){
		if(n1[i] == n2[i])
			result[i] = '0';
		else
			result[i] = '1';
	}
	cout << result;
	return 0;
}
