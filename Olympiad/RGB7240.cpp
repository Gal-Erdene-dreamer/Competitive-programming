#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int s[n], count = 0, sum = 0;
	for(int i = 0; i < n; ++i){
		cin >> s[i];
		sum+=s[i];
	}

	cout << count;
	return 0;
}
