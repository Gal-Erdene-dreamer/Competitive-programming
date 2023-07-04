#include <bits/stdc++.h>

using namespace std;

int main(){
	double x0, y0, x1, y1, R;
	cin >> x0 >> y0;
	cin >> R;
	cin >> x1 >> y1;
	double g = sqrt(pow(x1 - x0, 2) + pow(y1 - y0, 2));
	if(g <= R && y0 >= y1)
		cout << "YES";
	else 
		cout << "NO";
	return 0;
}
