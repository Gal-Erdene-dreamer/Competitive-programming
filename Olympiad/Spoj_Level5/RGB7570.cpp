#include <bits/stdc++.h>

using namespace std;

int main (){
	int k;
	string s;
	cin >> k >> s;
	int even = 0;
	int odd = 0;
	for(int i = 0; i < s.length(); i++){
		if(i % 2 == 0)
			odd += s[i] - '0';
		else
			even += s[i] - '0';
	}
	int sum = odd - even;
	if(sum % k == 0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
