/**
 * 	Author: Galuu
 * 	Created: 2023-07-29 22:35:20
**/
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
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
	int n; 
    cin >> n;
    vector<int> a(n);
    for(auto &x : a){
        cin >> x;
    }
    bool isNegative = 0;
    int mx = a[0], mxi = 0;
    for(int i = 1; i < n; i++){
        if(mx < a[i]){
            mx = a[i];
            mxi = i;
        }
    }
    if(n==1){
        cout << "0" << "\n";
        return;
    }
    if(mx < 1)
        isNegative = true;
    if(isNegative){
        cout << 2*(n-1) << "\n";
        for(int i = 1; i < n; i++){
            cout << n << " " << i << '\n';
        }
        for(int i = n-1; i >=1; i--){
            cout << i << " " << i+1 << "\n";
        }
    }
    else{
        cout << 5+2*(n-1) << "\n";
        for(int i = 0; i<5; i++){
            cout << mxi+1 << " " << mxi+1 << "\n";
        }
        cout << 2 << " " << mxi+1 << "\n";
        cout << 2 << " " << mxi+1 << "\n";
        for(int i = 3; i <= n; i++){
            cout << i << " " << i-1 << "\n";
            cout << i << " " << i-1 << "\n";
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
