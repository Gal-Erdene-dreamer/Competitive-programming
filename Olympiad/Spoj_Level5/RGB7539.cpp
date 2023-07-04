#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	string s1 = "hello";
	int i, j = 0;
	for(i = 0; i < s.length(); ++i){
		if(s[i] == s1[j]){
			j++;
			if(j == s1.length())
				break;
		}	
	}
	if(j == s1.length())
		cout << "YES";
	else
		cout << "NO";
	/*if(strstr(s.c_str(),s1.c_str()))
   		cout << "YES";
	else
		cout << "NO";
	if (s.find(s1) != string::npos) 
		cout << "YES";
	else
		cout << "NO";
	*/
	return 0;
}
