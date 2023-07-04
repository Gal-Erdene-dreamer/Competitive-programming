#include <bits/stdc++.h>
using namespace std;
#define elif else if

int main(){
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 1; i < s.size(); i++){
        if(s[i]!=s[i-1])
            ans++;
    }
    cout << ans;
}