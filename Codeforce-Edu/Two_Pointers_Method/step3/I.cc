#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <unordered_map>
#include <unordered_set>
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

const int mxN = 1e3 + 1;

unordered_set<int> set;
int s;
vector <int> dp(11);

bool good() {
    vector<int> current = dp;
    dbg(current);
    for(int i = 1; i < 11; ++i){
        if(current[i] <= 0)
            continue;
        for(int j = s - 1; j > 0; --j){
            if(j==i)
                continue;
            int curr_sum = j+i;
            if(current[j] && j+i <= s){
                current[curr_sum] = 1;
                current[j]--;
                dbg(current);
                if(curr_sum==s)
                    return true;
            }
        }
    }
    return false;
}

void solve(){
    int n;
    cin >> n >> s;
    
    std::vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = INT32_MAX;
    for(int j = 0, i = 0; j < n; j++){
        dp[a[j]]++;
        dbg(dp);
        while(good()){
            ans = min(ans, j - i + 1); 
            dbg(j, i);
            dp[a[i]]--;
            i++;
        }
    }
    if(ans == INT32_MAX)
        ans = -1;
    cout << ans << '\n';    
}

signed main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
