#include <bits/stdc++.h>

using namespace std;

int main (){
	int r1, r2, k1, k2;
	cin >> r1 >> k1 >> r2 >> k2;
	int result, i;
	if(r1 <= r2)
		i = r2 - r1;
	else
		i = 6 - r1 - r2;
	if(k1 < k2)
		result = (k2 - k1) + i * k1;
	else
		result = (k1 - k2) + i * k2;
	cout << result;
	return 0;
}
