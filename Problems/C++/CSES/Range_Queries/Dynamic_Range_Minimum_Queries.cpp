#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9)+7;

int N;
ll B[200002*2] = {0};

ll rmq(int a, int b) {
    a += N; b += N;
    ll s = INT_MAX;
    while (a <= b) {
        if (a%2 == 1) s = min(s, B[a++]);
        if (b%2 == 0) s = min(s, B[b--]) ;
        a /= 2; b /= 2;
    }
    return s;
}

void update(int k, int x) {
    k += N;
    B[k] += x;
    for (k /= 2; k >= 1; k /= 2) {
        B[k] = min(B[2*k], B[2*k+1]);
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
        else
            cout << rmq(a, b) << "\n";
        
    }
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t = 1;
    // cin >> t;
    while(t--) solve();


    return 0;
}