#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define all(x) (x).begin(),(x).end()
#define elif else if


const int MOD = int(1e9) + 7;

void solve(){
    int l, r;
    cin >> l >> r;
    int num = l;
    int n = s[s.size() - 1] - s[0];
    for(int i = l; i <= r; i++){
       to_string(i);
       
        if(n < s[s.size() - 1] - s[0]){
            n = s[s.size() - 1] - s[0];
            num = i;
        }
    }

    cout << num << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    // freopen("calcInput.txt", "r", stdin);
    // freopen("calcOutput.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}