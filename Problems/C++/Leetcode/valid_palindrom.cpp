#include <bits/stdc++.h>
using namespace std;

int main(){
	string s = "A 3232man, a plan, a canal: Panama";
	string v = "";
        for(char c : s){
            if(isalpha(c))
                v+=c;
        }
	cout << v << "\n";
        transform(v.begin(), v.end(), v.begin(), ::tolower);
	int left = 0; 
	int right = v.size()-1; 
	cout << v << "\n";
	bool ans = true;
	while(left < right){
            if(v[left] != v[right]){
                ans = false;
		cout << v[left] << " " << v[right] <<"\n";
		break;
		}
            left++;
            right--;
        }	
	cout << ans <<"\n";
       	return 0;
}
