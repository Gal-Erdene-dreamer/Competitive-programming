#include <bits/stdc++.h>
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n, s;
    std::cin >> n >> s;
    std::vector<int> w(n), c(n);
    for (int i = 0; i < n; i++) {
        std::cin >> w[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> c[i];
    }
    int weight = 0;
    i64 cost = 0;
    i64 ans = 0;
    for (int i = 0, j = 0; i < n; i++) {
        while (j < n && weight + w[j] <= s) {
            weight += w[j];
            cost += c[j];
            j++;
        }
        ans = std::max(ans, cost);
        weight -= w[i];
        cost -= c[i];
    }
    std::cout << ans << "\n";
    return 0;
}