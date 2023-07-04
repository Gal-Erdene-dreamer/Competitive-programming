#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, x;
    cin >> n >> x;
    int res = 0;
    for (int it = 0; it < 3; it++) {
      vector<int> a(n);
      for (int i = 0; i < n; i++) {
        cin >> a[i];
      }
      for (int y : a) {
        if ((y | x) != x) {
          break;
        }
        res |= y;
      }
    }
    cout << (res == x ? "Yes" : "No") << '\n';
  }
  return 0;
}
