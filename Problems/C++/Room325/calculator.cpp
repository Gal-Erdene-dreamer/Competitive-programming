#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define elif else if

const int MOD = int(1e9) + 7;

void solve()
{
    ll n;
    int a, b, c;
    cin >> n >> a >> b >> c;
    while (b > 0)
    {
        if (n == 0)
            break;
        n++;
        n /= 2;
        b--;
    }
    while (a > 0)
    {
        if (n == 0)
            break;
        n /= 2;
        a--;
    }
    while (c > 0)
    {
        if (n == 0)
            break;
        n--;
        n /= 2;
        c--;
    }
    cout << n << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    // freopen("calcInput.txt", "r", stdin);
    // freopen("calcOutput.txt", "w", stdout);
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}