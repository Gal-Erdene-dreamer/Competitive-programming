#include <bits/stdc++.h>

using namespace std;

long long reverse(long long n){
	n--;
	int m;
	if(n < 0)
		return 0;
	else {
		if(n % 3 == 0)
			m = 1;
		else if(n % 3 == 1)
			m = 3;
		else if(n % 3 == 2)
			m = 7;
		return m + 10 * reverse(n / 3);
	}
} 

int main(){
	long long n;
	cin >> n;
	int count = 0;
	char s[100];
//	cout << reverse(n);
	while(n > 0){
		n--;
		if(n % 3 == 0)
			s[count] = '1';
		else if(n % 3 == 1)
			s[count] = '3';
		else if(n % 3 == 2)
			s[count] = '7';
		count++;
		n/=3;
	}
	for(int i = count - 1; i >= 0; --i)
		cout << s[i];
	return 0;
}
