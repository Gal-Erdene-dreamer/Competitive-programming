#include <bits/stdc++.h>
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    i64 c;
    std::cin >> n >> c;
    std::string s;
    std::cin >> s;
    int counta = 0, countb = 0;
    i64 rudeness = 0;
    int ans = 0;
    for (int i = 0, j = 0; i < n; i++) {
        while (j <= n && rudeness <= c) {
            if (j < n) {
                if (s[j] == 'a') {
                    counta++;
                }
                if (s[j] == 'b') {
                    countb++;
                    rudeness += counta;
                }
            }
            j++;
        }
        ans = std::max(ans, j - 1 - i);
        if (s[i] == 'a') {
            counta--;
            rudeness -= countb;
        }
        if (s[i] == 'b') {
            countb--;
        }
    }
    std::cout << ans << "\n";
    return 0;
}