#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

//Macros
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

int main(){
	int best = 0, sum = 0, n;
	cin >> n;
	int array[n];
	for (int k = 0; k < n; k++) {
		cin >> array[k];
		sum = max(array[k],sum+array[k]);
		cout << sum << "\n";
		best = max(best,sum);
	}
	cout << best << "\n";
//	endl n \n ees udan
// Kadane’s algorithm
}
