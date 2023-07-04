#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	queue <char> q;
	int max = 0, i, counter, counter1;
	for(i = 0; i < s.length(); ++i)
		q.push(s[i]);
	int size;	
	for(i = 1; i < s.length(); ++i){
		if(s[max] < s[i])
			max = i;
		else if(s[max] == s[i]){
			counter = 1;
			counter1 = 1;
			size =  s.length();
			while(size--){
				if(i + counter1 == s.length())
					counter1-= s.length();
				if(max + counter == s.length())
					counter -= s.length();
				if(s[max + counter] < s[i + counter1]){
					max = i;
					break;
				}
				else if(s[max + counter] > s[i + counter1])	
					break;
				else{
					counter++;
					counter1++;
				}
			}
		}
	}
	char a;
	while(max--){
		a = q.front();
		q.pop();
		q.push(a);
	}
	
	while(!q.empty()){
		cout << q.front();
		q.pop();
	}
	return 0;
}
