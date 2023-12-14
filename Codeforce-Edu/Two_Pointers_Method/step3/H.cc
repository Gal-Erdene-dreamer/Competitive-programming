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

void solve(){
    int n, m, s, A, B;
    cin >> n >> m >> s >> A >> B;
    
    std::vector<int> a(n),b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    std::sort(a.begin(), a.end(), std::greater<int>());
    std::sort(b.begin(), b.end(), std::greater<int>());
    ll cost_a = 0, cost_b = 0; 
    int weight_a = 0, weight_b = 0, l_a = n-1, l_b = m-1;
    for(int i = 0; i < n; i++){
        if(weight_a + A > s){
            l_a = i - 1;
            break;
        }
        cost_a+=a[i];
        weight_a+=A;
        
    }
    for(int i = 0; i < m; i++){
        if(weight_b + B > s){
            l_b = i - 1;
            break;
        }
        cost_b+=b[i];
        weight_b+=B;
    }
    ll ans = 0, cost = 0;
    int weight = 0;
    int i = 0, j = 0;     
    while(i < n && j < m){
        dbg(cost_a, weight_a);
        dbg(cost_b, weight_b);
        dbg(i, j);
        dbg(a[i], b[j]);
        dbg(weight, ans);
        if(cost_a > cost_b){
            cost+=a[i];
            weight+=A;
            cost_a -= a[i];
            weight_a-=A;
            while (l_b >= 0 && s - weight < weight_b) {
                cost_b-=b[l_b];
                weight_b-=B;   
                l_b--;
            } 
            i++;
        }else{
            cost+=b[j];
            weight+=B;
            cost_b -= b[j];
            weight_b-=B;
            while (l_a >= 0 && s - weight < weight_a) {
                cost_a-=a[l_a];
                weight_a-=A;   
                l_a--;
            } 
            j++;
        }
        if(weight > s)
            break;
        ans = max(ans, cost);
    }
    if(weight <= s){
        while(i < n){
            cost+=a[i];
            weight+=A;
            i++;
            if(weight > s)
                break;
            ans = max(ans, cost);
        }
        while (j < m) {
            cost+=b[j];
            weight+=B;
            j++;
            if(weight > s)
                break;
            ans = max(ans, cost);
        }
    }
    cout << ans << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
