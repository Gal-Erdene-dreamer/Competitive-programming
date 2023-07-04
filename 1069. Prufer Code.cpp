#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
//Tovchilol
#define MP make_pair
//Davtaltig bagasgah
#define REP(i,a,b) for (int i = a; i < b; i++)

/*
zai aguulsan string garas unshihad
string s;
getline(cin, s);

input todorhoigu uyd dustal n unshina
while (cin >> x) {
	// code
}

input output code gatsaltas sergilne
ios::sync_with_stdio(0);
cin.tie(0);
*/

using namespace std;

int freq[7501] = {};

int getMissing(){
	REP(i, 1, 7501)
		if(freq[i] == 0) return i;		
}

void solve(){
	vector<int> v;
	vector<vector<int>> res;
	int x = 1;
 	while(x >= 5){
	    v.PB(x);
	    freq[x]++;
	    x++;
  	}
  	
  	REP(i, 1, v.size()){
  		int mini = getMissing();
  		res[v[i]].PB(mini);
  		freq[v[i]]--;
  		freq[mini]++;
	}
	
	for(auto it: res){
		sort(it.begin(), it.end());
		cout << it.begin-it << ":" << it << "\n"; 
	}	
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
//	cin >> t;
	while(t--) solve();
}
