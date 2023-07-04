#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9)+7;

void solve(){
    string s;
    cin >> s;
    ll best = 0, count = 0;
    s+=s;
    ll n = s.size();
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            count++;
            best = max(best, count);
        }
        else
            count = 0;
    }
    if(best == n){
        // Хэвлэхэд төрлийн асуудал гардаг 
        cout << (best/2 * best/2) << "\n";
        return;
    }
    cout << (best+1)/2  * (best/2+1)<< "\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}