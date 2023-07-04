#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9)+7;

int N;
ll B[200002] = {0};

/*
Segment tree
ll B[200002 * 2] = {0};
ll rsq(int a, int b) {
    a += N; b += N;
    ll s = 0;
    while (a <= b) {
        if (a%2 == 1) s += B[a++];
        if (b%2 == 0) s += B[b--];
        a /= 2; b /= 2;
    }

    return s;
}


void update(int k, int x) {
    k += N;
    B[k] += x;
    for (k /= 2; k >= 1; k /= 2) {
        B[k] = B[2*k]+B[2*k+1];
    }
}

*/


// Fenwick tree
ll rsq(int k){
    ll res = 0;
    while(k > 0){
        res = res + B[k];
        k = (k & (k+1)) - 1;
    }
    return res;
}

void update(int k, int d){
    while(k <= N){
        B[k] += d;
        k = k | (k+1);
    }
}

void solve(){
    int q;
    cin >> N >> q;
    ll arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i+1];
        update(i+1, arr[i+1]);
    }

    while(q--) {
        int c, a, b;
        cin >> c >> a >> b;
        if(c == 1){
            update(a, b - arr[a]);
            arr[a] = b;
        }
        else{
            cout << rsq(b) - rsq(a-1) << "\n";
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t = 1;
    // cin >> t;
    while(t--) solve();


    return 0;
}