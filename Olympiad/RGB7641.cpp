#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int i, count = 0, q = 0, w = 0, e = 0, r = 0;
	int q1 = 0, w1 = 0, e1 = 0, r1 = 0;
	for(i = 0; i < s.length(); i++){
		if(s[i] == '(')
			q++;
		else if(s[i] == '{')
			w++;
		else if(s[i] == '[')
			e++;
		else if(s[i] == '<')
			r++;
		else if(s[i] == ')'){
			if(q <= 0)
				q1++;
			else
				q--;
		}
		else if(s[i] == '}'){
			if(w <= 0)
				w1++;
			else
				w--;
		}
		else if(s[i] == ']'){
			if(e <= 0)
				e1++;
			else
				e--;
		}
		else if(s[i] == '>'){
			if(r <= 0)
				r1++;
			else
				r--;
		}	
	}
	cout << q+w+e+r+q1+w1+e1+r1;
	return 0;
}
