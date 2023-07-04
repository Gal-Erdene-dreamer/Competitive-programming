#include <bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        long long ans = 0;
        for(int i = 0, v; i < n; i++){
            cin >> v;
            ans+=v;
        }
        for(int i = 0, v; i < m; i++){
            cin >> v;
            ans-=v;
        }
        if(ans==0)
            cout << "Draw\n";
        else if(ans > 0)
            cout << "Tsondu\n";
        else
            cout << "Tenzing\n"; 
    }
}