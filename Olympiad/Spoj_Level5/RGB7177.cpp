#include <bits/stdc++.h>

using namespace std;
/*int main(){
	string s;
	cin >> s;
	int i;
	int m = 0;
	//ogogdson 7tin toollin system toog 19t huvagdah esehig shalgah
	for(i = 0; i < s.length(); ++i)
		m = (7 * m + s[i] - '0') % 19;
	if(m == 0)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}*/
int main(){
	string s;
	cin >> s;
	int i;
	int m = 0;
	/*Ogogdson a toollin systemiin huvid ug too N toond huvagdah esehig shalgah tomiyo n 
		m = (a*m + tolov)modN baidag end tolov gedeg n 2tin toollin systemin huvid 0, bolon 1 ym
		m gedeg n 0ees ehled oron bolgoni daragas garah utga ym
		ene metchilen yvsar 
		m == 0 uyd huvagdana gej uzne. esreg tohioldold huvagdahgui
	*/
	for(i = 0; i < s.length(); ++i)
		m = (2 * m + s[i] - '0') % 15;
	
	if(m == 0)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
