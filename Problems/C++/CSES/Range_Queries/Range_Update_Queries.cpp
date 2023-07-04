#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9) + 7;

int N;
ll A[200001];
ll B[200001] = {0};

/*Segment Tree
ll B[200002*2] = {0};
ll rsq(int a, int b){
    a+=N; b+=N;
    ll s = 0;
    while(a <= b){
        if(a%2==1) s+=B[a++];
        if(b%2==0) s+=B[b--];
        a/=2; b/=2;
    }
    return s;
}

void add(int k, int x){
    k+=N;
    B[k]+=x;
    for(k/=2; k>=1; k/=2)
        B[k] = B[2*k] + B[2*k+1];
}

*/
// Fenwick Tree
ll rsq(int k){
    ll s = 0;
    while(k > 0){
        s+=B[k];
        k = (k & (k+1)) - 1;
    }
    return s;
}

void add(int k, int x){
    while(k <= N){
        B[k]+=x;
        k = (k | (k+1));
    }
}



void solve(){
    int q;
    cin >> N >> q;
    cin >> A[0];
    add(1, A[0]);
    for(int i = 1; i < N; i++){
        cin >> A[i];
        add(i+1, A[i] - A[i-1]);
    }

    while(q--){
        char c;
        cin >> c;
        if(c=='1'){
            int a, b, u;
            cin >> a >> b >> u;
            add(a, u);
            add(b+1, -u);
        }
        else{
            int k;
            cin >> k;
            // Fenwick Tree
            cout << rsq(k) << "\n";
            // Segment Tree 
            // cout << rsq(1, k) << "\n";
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