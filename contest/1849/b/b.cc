/**
 * 	Author: Galuu
 * 	Created: 2023-07-27 23:39:10
**/
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ar array
using ll = long long;
using ld = long double;
using ull = unsigned long long;
const int mxN = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    iota(b.begin(), b.end(), 0);
    for(auto &x : a){
        cin >> x;
        // x = (x-1) % k + 1;
        x%=k;
        if(x==0)
            x = k;
    }
    // std::sort    The order of equal elements is not guaranteed to be preserved.
    // std::stable_sort The order of equal elements is guaranteed to be preserved.
    /*
        stable_sort(b.begin(), b.end(), [&](int i, int j){
            return  a[i] > a[j];
        });
    

    std::vector<std::pair<int, int>> vect = {{3, 2}, {1, 5}, {2, 4}, {3, 1}};
    std::sort compares the first elements of the pairs first, and if they are equal, 
    std::sort compares the second elements.
    std::sort(vect.begin(), vect.end());
    */
    sort(b.begin(), b.end(), [&](int i, int j){
        return a[i] == a[j] ? i < j : a[i] > a[j];
    });
    for(auto &x : b){
        cout << x+1 << " ";
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
