#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a+b==c || a+c==b || b+c==a) cout<<"Yes";
	else cout<<"No";
    // if(max({a, b, c})*2==a+b+c) cout<<"Yes";
	// else cout<<"No";
}