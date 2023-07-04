#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9) + 7;

void solve(){
    string s;
    cin >> s;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            cout << i + 1 << " " << i + 2;
            return;
        }
    }
    for (int i = 0; i < s.size() - 2; i++)
    {
        if (s[i] == s[i + 2])
        {
            cout << i + 1 << " " << i + 3;
            return;
        }
    }
    cout << "-1 -1";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}