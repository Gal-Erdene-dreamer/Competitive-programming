#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
//Tovchilol
#define MP make_pair
//Davtaltig bagasgah
#define REP(i,a,b) for (int i = a; i < b; i++)

using namespace std;

int freq[7501] = {};

int x;


int getMissing(){
  for(int i = 1;i<7501;i++){
    if(freq[i] <= 0) return i;
  }
}

void solve(){
	vector<int> v;
 	while(scanf("%d", &x) != EOF){
	    v.PB(x);
	    freq[x]++;  	
	}
  
  	int mx = x;
  
  	vector<int> res[mx+1];
  	
  	REP(i, 0, v.size()){
  		int mini = getMissing();
  		res[v[i]].PB(mini);
		res[mini].PB(v[i]);
		freq[mini]++;
  		freq[v[i]]--;
	}
	
	REP(i, 1, mx+1){
		sort(res[i].begin(), res[i].end());
		cout << i << ": ";
		for(auto re : res[i])
		    cout << re << " ";  
  
		cout << "\n";
	}	
}


int main(){
//	ios_base::sync_with_stdio(false); cin.tie(nullptr);
  	#ifndef ONLINE_JUDGE
    		freopen("input.in", "r", stdin);
  	#endif

	int t = 1;
//	cin >> t;
	while(t--) solve();

	return 0;
}
