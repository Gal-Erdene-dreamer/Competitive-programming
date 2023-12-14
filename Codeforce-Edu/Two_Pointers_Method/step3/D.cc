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
#include <iterator>
#include <map>
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

const int mxN = 1e5+1;

int num_of_elements[4], num_of_types = 0;
std::map<pair<int, int>, int> mp;

void add(int x){
    for(int i = 0; i < 4; i++){
        if(mp.count({i, x})){
            num_of_elements[i]++;
            num_of_types += num_of_elements[i] == 1;
        }
    }
}


void remove(int x){
    for(int i = 0; i < 4; i++){
        if(mp.count({i, x})){
            num_of_elements[i]--;
            num_of_types -= !num_of_elements[i];
        }
    }
}

bool good(){
    return num_of_types == 4;
}

void solve(){
	int n[4];
    vector<int> v[4];
    for (int i = 0; i < 4; ++i){
        cin >> n[i];
        for(int j = 0, x; j < n[i]; j++) {
            cin >> x;
            v[i].push_back(x);
            mp[{i, x}]++;
        }
    }
    
    int ans = mxN, maximum = mxN, minimum = 0;
    for (int r = 1, l = 1; r < mxN; ++r){
        add(r);
        while(good()){
            if(ans > r - l){
                ans = r - l, maximum = r, minimum = l;
            }
            remove(l);
            l++;

        }
    }
    int num_of_max, num_of_min;
    for (int i = 0; i < 4; ++i){
        if(mp.count({i, maximum})){
            num_of_max++;
        }
        if(mp.count({i, minimum})){
            num_of_min++;
        }
    }
    int res[4];
    for (int i = 0; i < 4; ++i){
        if(mp.count({i, maximum}) && mp.count({i, minimum})){
            num_of_max--;
            num_of_min--;
            if(num_of_max > num_of_min)
                res[i] = maximum;
            else
                res[i] = minimum;
            continue;
        }else if(mp.count({i, maximum})){
                num_of_max--;
                res[i] = maximum;
                continue;
        }else if(mp.count({i, minimum})){
            num_of_min--;
            res[i] = minimum;
            continue;
        }
        for(int j = 0; j < n[i]; j++) {
            if(maximum >= v[i][j] && v[i][j] >= minimum){
                res[i] = v[i][j];
                break;
            }
        }
    }
    for(int i : res)
        cout << i << " ";
    cout << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
