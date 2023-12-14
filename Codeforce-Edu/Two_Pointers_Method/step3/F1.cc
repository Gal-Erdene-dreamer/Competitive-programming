#include <bits/stdc++.h>
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n, m;
    std::cin >> n >> m;
    std::string s, cards;
    std::cin >> s >> cards;
    int have[26] {}, current[26] {};
    for (auto c : cards) {
        have[c - 'a']++;
    }
    i64 ans = 0;
    for (int i = 0, j = 0; i < n; i++) {
        while (j < n && have[s[j] - 'a'] > current[s[j] - 'a']) {
            current[s[j] - 'a']++;
            j++;
        }
        ans += j - i;
        current[s[i] - 'a']--;
    }
    std::cout << ans << "\n";
    return 0;
}