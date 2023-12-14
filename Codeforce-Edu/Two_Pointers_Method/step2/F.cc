#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <stack>
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

const int mxN = 1e5+1;


struct stack {
    vector<ll> s, smin = {INT64_MAX}, smax = {INT64_MIN};
    ll pop(){
        ll res = s.back();
        s.pop_back();
        smin.pop_back();
        smax.pop_back();
        return res;
    }
    void push(ll a){
        s.push_back(a);
        smin.push_back(::min(smin.back(), a));
        smax.push_back(::max(smax.back(), a));
    }

    ll min(){
        return smin.back();
    }

    ll max(){
        return smax.back();
    }

    bool empty(){
        return s.empty();
    }
};

::stack s1, s2;

void add(ll a){
    s2.push(a);
}

void remove(){
    if (s1.empty()){
        while(!s2.empty()){
            s1.push(s2.pop());
        }
    }
    dbg(s1.smin);
    dbg(s1.smax);
    s1.pop();
}

ll k;

bool good(){
    ll mn = min(s1.min(), s2.min());
    ll mx = max(s1.max(), s2.max());
    return (mx - mn) <= k;
}

void solve(){
    int n; 
    cin >> n >> k;  
    vector<ll> A(n);
    for(int i = 0; i < n; i++) cin >> A[i];


    ll ans = 0;
    for (int r = 0, l = 0; r < n; r++){
        add(A[r]);
        while(!good()){
            remove();
            l++;
        }
        ans+=r-l+1;
        dbg(r, l);
        dbg(ans);
    }
    cout << ans << "\n";
}

signed main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
