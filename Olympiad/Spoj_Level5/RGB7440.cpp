#include <bits/stdc++.h>

using namespace std;

int main(){
	char c;
	cin >> c;
	for(int i = c; i <= 'Z'; ++i){
		for(int j = c; j <= i; ++j)
			printf("%c", j);
		cout << endl;
	}
	return 0;
}
