#include <bits/stdc++.h>
using namespace std;
#define ar array
using ll = long long;
const int MAX_N = 1e5 + 5;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    string s;
    cin >> s;
	if(s[0]==s[s.size()-1])
		cout << ((s.size()-2)%2==0 ? "First" : "Second");
	else
		cout << ((s.size()-2)%2==0 ? "Second" : "First");
    return 0;
}
