#include <bits/stdc++.h>
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    i64 p;
    std::cin >> n >> p;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    i64 sum = std::accumulate(a.begin(), a.end(), 0ll);
    a.insert(a.end(), a.begin(), a.end());
    i64 ans = 9e18;
    int beg = -1;
    i64 base = p / sum * n;
    i64 current = p / sum * sum;
    for (int i = 0, j = 0; i < n; i++) {
        while (current < p) {
            current += a[j++];
        }
        if (base + j - i < ans) {
            ans = base + j - i;
            beg = i;
        }
        current -= a[i];
    }
    std::cout << beg + 1 << " " << ans << "\n";
    return 0;
}