#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	bool check = true;
	int card[m];
	for(int i = 0; i < m; ++i)
		cin >> card[i];
	
	sort(card, card+m);
	int a = card[0] == 0 ? card[0]+1 : card[0];
	a = card[m-1] == n ? a-1 : a;
	
	
//	for(int i = 1; i < m; i++){
//		if(card[0] == 0)
//			break;
//		if(card[i] == card[i-1]){
//			break;
//		}
//		else if(card[i] - card[i-1] == 2){
//			a++;
//			break;
//		}
//	}
	
//	cout << a;

	for(int i = 0; i < m; i++){
		if(card[i] == a-1 || card[i] == a){
			a++;
		}
		else{
			check = false;
			break;
		}
	}
//	if(card[0] < 0)
//		check = false;
//	
//	if(card[m-1] > n)
//		check = false;
//
//	
//	if(card[m-1] == n && card[m-2] == n){
//		check = false;
//	}
//	
//	
//	if(m > n)
//		check = false;
	
	if(check)
		cout << "YES";
	else
		cout << "NO";
}
