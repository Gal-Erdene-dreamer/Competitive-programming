#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int count = 0;
	for(int i = 0; i < s.length(); ++i){
		for(int j = 0; j < i; j++){
			if(s[j] == s[i]){
				count++;
				break;
			}
		}
	}
	cout << count;
	return 0;
}
