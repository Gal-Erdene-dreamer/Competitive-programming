#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, j, N;
	cin >> N;
	int a[N][N];
	for(i = 0; i < N; i++)
		for(j = 0; j <= i; j++)
			cin >> a[i][j];
	for(i = N - 2; i >= 0; --i)
		for(j = 0; j <= i; j++)
			a[i][j] = max(a[i][j] + a[i + 1][j], a[i][j] + a[i + 1][j + 1]);

	cout << a[0][0];
	return 0;
}
