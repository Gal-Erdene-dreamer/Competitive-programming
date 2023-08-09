#include <bits/stdc++.h>
using namespace std;
#ifdef tabr
#include "library/debug.cpp"
#else
#define debug(...)
#endif

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> c(1 << 8);
        int t = 0;
        c[0] = 1;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            t ^= a[i];
            c[t] = 1;
            for (int j = 0; j < (1 << 8); j++) {
                if (c[j]) {
                    ans = max(ans, j ^ t);
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}