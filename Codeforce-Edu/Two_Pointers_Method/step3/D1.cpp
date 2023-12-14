#include <bits/stdc++.h>
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n[4];
    std::vector<int> a[4];
    for (int i = 0; i < 4; i++) {
        std::cin >> n[i];
        a[i].resize(n[i]);
        for (int j = 0; j < n[i]; j++) {
            std::cin >> a[i][j];
        }
        std::sort(a[i].begin(), a[i].end());
    }
    int diff = 1e9;
    int ans[4];
    int j[4] {};
    while (j[0] < n[0] && j[1] < n[1] && j[2] < n[2] && j[3] < n[3]) {
        int mx = 0, mn = 1e9;
        for (int i = 0; i < 4; i++) {
            mx = std::max(mx, a[i][j[i]]);
            mn = std::min(mn, a[i][j[i]]);
        }
        if (mx - mn < diff) {
            diff = mx - mn;
            for (int i = 0; i < 4; i++) {
                ans[i] = a[i][j[i]];
            }
        }
        for (int i = 0; i < 4; i++) {
            if (a[i][j[i]] == mn) {
                j[i]++;
            }
        }
    }
    std::cout << ans[0] << " " << ans[1] << " " << ans[2] << " " << ans[3] << "\n";
    return 0;
}