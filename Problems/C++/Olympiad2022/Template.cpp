#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
//Tovchilol
#define MP make_pair
//Davtaltig bagasgah
#define REP(i,a,b) for (int i = a; i <= b; i++)

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

bool check(string a, string b){
    cout << a.size() << " "<< a << endl;
    cout << b.size() << " " << b << endl;
    return true;
}


vector<string> bigSorting(vector<string> unsorted) {
    sort(unsorted.begin(), unsorted.end(), check);
    return unsorted;
}

void solve(){
  int n;
  cin>>n;
  vector<string> v;
  v.reserve(n);
  string s;
  for(int i = 0;i<n;i++){
    cin>>s;
    v.push_back(s);
  }
  v = bigSorting(v);
  for(int i = 0; i < v.size(); ++i)
  	cout << v[i] << "\n";
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	while(t--)  solve();
}
