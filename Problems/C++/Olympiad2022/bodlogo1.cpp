#include <bits/stdc++.h>

using namespace std;
 
int main(){
	int a;
	cin >> a;
	int mas[a];
	for(int i = 0; i < a; ++i){
		cin >> mas[i];
	}
	int max, a1, a2;
	max = 0;
	for(int i = 0; i < a; ++i){
		for(int j = i+1; j < a; ++j){
			if(max < (j-i + 1) * min(mas[i], mas[j])){
				max = (j-i + 1) * min(mas[i], mas[j]);
				a1 = i+1;
				a2 = j+1;
			}		
		}
	}
	cout << max << "asadf " << a1 << a2;
	return 0;
}
