#include <bits/stdc++.h>

using namespace std;

int fac (int a){
	if(a == 1)
		return 1;
	else
		return a * fac(a - 1);
}
int main(){
	string s;
	cin >> s;
	int i;
	sort(s.begin(), s.end());
	int count[9], c = 0;
	for(i = 0; i < 9; ++i)
		count[i] = 1;
		
	for(i = 0; i < s.length(); ++i){
		if(s[i] == s[i+1]){
			count[c]++;
		}else
			c++;
	}
	int size = s.length()/2;
	int div = 1;
	int number;
	for(i = 0; i < c; ++i)
		div *= fac(count[i] / 2);
	number = fac(size) / div;
	reverse(s.begin(),s.end());
	char max[400];
	for(i = 0; i < s.length(); i+=2){ 
		max[i / 2] = s[i];
		max[s.length() - i / 2 - 1] = s[i + 1];
	}
	cout << number << endl;
	for(i = 0; i < s.length(); ++i)
		cout << max[i];
		
	return 0;
}
