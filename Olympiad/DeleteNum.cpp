#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, k;
    cin >> n >> k;
    int c = 1;
    while(n > k){
        if(n % k == 0)
            break;
        n -= n / k;
        c++;
    }
    cout << c;
}


int main()
{
    int t = 1;
    //cin >> t;
    while(t--) solve();
    return 0;
}
