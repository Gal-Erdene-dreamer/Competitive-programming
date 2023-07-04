#include <bits/stdc++.h>

using namespace std;

int main(){
	int n = 0, sum = 0;
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i++){
		sum += pow(s[i] - '0', s.length());
		n += (s[i] - '0') * pow(10, (s.length() - i - 1));
	}
	if(sum == n)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
