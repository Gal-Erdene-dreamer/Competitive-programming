#include <bits/stdc++.h>
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
using namespace std;
 
  
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

#ifdef LOCAL
#define dbg(...) cerr << '[' << __FILE__ << ':' << __LINE__ << "] (" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n, m, s, A, B;
    std::cin >> n >> m >> s >> A >> B;
    std::vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }
    std::sort(a.begin(), a.end(), std::greater<>());
    std::sort(b.begin(), b.end(), std::greater<>());
    m = std::min(m, s / B);
    b.resize(m);
    i64 cost = std::accumulate(b.begin(), b.end(), 0ll);
    i64 ans = 0;
    for (int i = 0, j = m; i <= n && i * A <= s; i++) {
        while (i * A + j * B > s) {
            j--;
            cost -= b[j];
        }
        ans = std::max(ans, cost);
        if (i < n) {
            cost += a[i];
        }
        dbg(ans);
    }
    std::cout << ans << "\n";
    return 0;
}