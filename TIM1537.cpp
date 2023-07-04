#include <bits/stdc++.h>
using namespace std;

int main(){
	int k, p, i;
	cin >> k >> p;	
	if(k < 2)
		cout << "0";
	else {
		int dp[k+1];
		dp[2] = 1 % p;
		for(i = 3; i <= k; i++){
			if(i % 2 == 0){
				dp[i] =(dp[i/2] + dp[i-1]);
			}else
				dp[i] = dp[i-1];
			
//			uildel tsoolj bna olon udaa uldegdeltei huvaahgu	
			if(dp[i] >= p) dp[i] -= p;
		}
		cout << dp[k];
	}
		
}

