#include <bits/stdc++.h>

using namespace std;

int main (){
	int n;
	cin >> n;
	if(n > 2)
		cout << pow((n - 2) * 2, 2) + 8;
	return 0;
}
