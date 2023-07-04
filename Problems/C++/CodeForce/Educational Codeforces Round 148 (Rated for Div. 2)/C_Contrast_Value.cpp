/**
 *    author:  tourist
 *    created: 12.05.2023 10:38:03       
**/
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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    a.resize(unique(a.begin(), a.end()) - a.begin());
    n = (int) a.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
      if (i == 0 || i == n - 1 || (a[i] > a[i - 1]) == (a[i] > a[i + 1])) {
        ans += 1;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
