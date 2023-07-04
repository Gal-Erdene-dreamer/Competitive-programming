#include <bits/stdc++.h>

using namespace std;

int main(){
	int d, count = 0;
	cin >> d;
	int n = d;
	char s[1000];
	if(d % 2 == 0)
		cout << "Impossible";
	else{
		while(d > 0){
			d /= 2;
			count++;
		}
		int i = 0;
		cout << count << endl;
		int j = count;
		while(j > 0){
			j--;
			if(i < n){
				i += pow(2, j);
				s[j] = '+';
			}	
			else{
				i -= pow(2, j);
				s[j] = '-';
			}
		}
		j = 1;
		for(i = 0; i < count; i++){
			cout << s[i] << j;
			j *= 2;
		}
	}
	return 0;
}
