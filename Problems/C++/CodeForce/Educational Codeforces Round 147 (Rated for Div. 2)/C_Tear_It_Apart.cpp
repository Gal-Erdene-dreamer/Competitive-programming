#include <bits/stdc++.h>
using namespace std;
#define elif else if
using ll = long long;
const int MOD = 1e9 + 7;


bool check(string str){
    for(int i = 0; i < str.size()-1; i++){
        if(str[i] != str[i+1]){
            return false;
        }
    }
    return true;
}

void solve(){
    string s;
    cin >> s;   
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
