#include <bits/stdc++.h>
using namespace std;
 
int main () {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int n, m;
    cin >> n >> m;
    bool ok = (n == m);
    int cnt = 0;
    while (n%3 == 0) {
      n /= 3;
      cnt++;
      for (int i = 0; i <= cnt; i++) {
        if (m == (n<<i)) ok = 1;
      }
    }
    cout << (ok ? "YES" : "NO") << '\n';
  }
}