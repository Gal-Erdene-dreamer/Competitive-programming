#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
using vll = vector<long long>;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define per(i, a, b) for (int i = a; i >= b; i--)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define ins insert
#define fi first
#define se second
#define pb push_back
#define elif else if


void solve() {
  i64 n;
  cin >> n;
  map<i64, i64> d;
  for (int i = 0, x; i < n; i++) {
    cin >> x;
    for (int j = 2; j * j <= x; j++) {
      while (!(x % j)) {
        x /= j;
        ++d[j];
      }
    }
    if (x > 1) {
      ++d[x];
    }
  }
  i64 res = 0;
  i64 cnt = 0;
  for (auto [x, y] : d) {
    res += y / 2;
    cnt += y % 2;
  } 
  cout << res + cnt / 3 << "\n";
}


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }

  return 0;
}