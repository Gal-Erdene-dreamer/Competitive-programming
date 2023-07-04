#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int i, count = 0;
	for(i = 0; i < s.length(); i++){
		if(count < 0)
			break;
		if(s[i] == '(')
			count++;
		else if(s[i] == ')')
			count--;
	}
	if(count == 0)
		cout << "Good";
	else 
		cout << "Bad";
	return 0;
}
