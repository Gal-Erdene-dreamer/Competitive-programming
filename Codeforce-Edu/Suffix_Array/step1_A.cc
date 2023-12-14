#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;
#define ar array

template<class Fun> class y_combinator_result {
    Fun fun_;
public:
    template<class T> explicit y_combinator_result(T &&fun): fun_(std::forward<T>(fun)) {}
    template<class ...Args> decltype(auto) operator()(Args &&...args) { return fun_(std::ref(*this), std::forward<Args>(args)...); }
};
template<class Fun> decltype(auto) y_combinator(Fun &&fun) { return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun)); }
 
 
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
 
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << '[' << __FILE__ << ':' << __LINE__ << "] (" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

void solve(){
    string s;
    cin >> s;
    s+='$';
    int n = s.size();
    std::vector<int> p(n), c(n);
    {
        // k = 0
        vector<pair<char, int>> a(n);
        for(int i = 0; i < n; ++i) a[i] = {s[i], i};
        sort(a.begin(), a.end());
        for(int i = 0; i < n; ++i) p[i] = a[i].second;
        c[p[0]] = 0;
        for(int i = 1; i < n; ++i){
            if (a[i].first == a[i-1].first)
                c[p[i]] = c[p[i-1]];
            else
                c[p[i]] = c[p[i-1]] + 1;
        }
    }

    int k = 0;
    while ((1 << k) < n) {
        // k -> k + 1  
        std::vector<pair<pair<int, int>, int>> a(n);
        for(int i = 0; i < n; ++i) {
            a[i] = {{c[i], c[(i + (1 << k)) % n]}, i};
        }
        sort(a.begin(), a.end());
        for(int i = 0; i < n; ++i) p[i] = a[i].second;
        c[p[0]] = 0;
        for(int i = 1; i < n; ++i){
            if (a[i].first == a[i-1].first)
                c[p[i]] = c[p[i-1]];
            else
                c[p[i]] = c[p[i-1]] + 1;
        }
        k++;
    }
    for(int i = 0; i < n; i++){
        cout << p[i] << " ";
    }
    cout << "\n";
}

signed main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
